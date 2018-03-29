/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATESCALINGPLANREQUEST_P_H
#define QTAWS_CREATESCALINGPLANREQUEST_P_H

#include "autoscalingplans_p.h"
#include "createscalingplanrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class CreateScalingPlanRequest;

class QTAWS_EXPORT CreateScalingPlanRequestPrivate : public AutoScalingPlansPrivate {

public:
    CreateScalingPlanRequestPrivate(const AutoScalingPlans::Action action,
                                   CreateScalingPlanRequest * const q);
    CreateScalingPlanRequestPrivate(const CreateScalingPlanRequestPrivate &other,
                                   CreateScalingPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateScalingPlanRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
