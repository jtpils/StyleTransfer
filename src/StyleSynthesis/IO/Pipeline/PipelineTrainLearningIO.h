//============================================================================
//
// This file is part of the Style Transfer project.
//
// Copyright (c) 2016
// -Zhaoliang Lun, Evangelos Kalogerakis (authors of the code) / UMass-Amherst
//
// This is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This software is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this software.  If not, see <http://www.gnu.org/licenses/>.
//
//============================================================================

#pragma once

#include <string>
#include <vector>

#include "IO/BaseIO.h"

using namespace std;

namespace StyleSynthesis {

	class ContextPartGraph;
	class ContextPartGraphMatch;
	class ContextPartGraphNodeGenerator;

	class PipelineTrainLearningIO : public BaseIO {

	public:

		static bool process(string learningFolder = "learn/");

	private:
		static bool loadGraphMatchStructures(const pair<string, string>&, const string&, ContextPartGraphNodeGenerator*, ContextPartGraphMatch*, pair<ContextPartGraph*, ContextPartGraph*>& );
		static bool generateTrainingTriplets(const vector< pair<int, int> >&, const ContextPartGraphMatch*, vector< tuple<int, int, int> > & );
	};

}