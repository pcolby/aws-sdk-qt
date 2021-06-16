/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_EXPORTEC2INSTANCERECOMMENDATIONSREQUEST_P_H
#define QTAWS_EXPORTEC2INSTANCERECOMMENDATIONSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "exportec2instancerecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportEC2InstanceRecommendationsRequest;

class QTAWS_EXPORT ExportEC2InstanceRecommendationsRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    ExportEC2InstanceRecommendationsRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   ExportEC2InstanceRecommendationsRequest * const q);
    ExportEC2InstanceRecommendationsRequestPrivate(const ExportEC2InstanceRecommendationsRequestPrivate &other,
                                   ExportEC2InstanceRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportEC2InstanceRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
