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

#ifndef QTAWS_AUTOSCALINGPLANSREQUEST_P_H
#define QTAWS_AUTOSCALINGPLANSREQUEST_P_H

#include "autoscalingplans_p.h"
#include "autoscalingplansrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class AutoScalingPlansRequest;

class QTAWS_EXPORT AutoScalingPlansRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AutoScalingPlansRequest::Action action; ///< AutoScalingPlans action to be performed.
    QString apiVersion;        ///< AutoScalingPlans API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AutoScalingPlans request (query string) parameters. @todo?

    AutoScalingPlansRequestPrivate(const AutoScalingPlansRequest::Action action, AutoScalingPlansRequest * const q);
    AutoScalingPlansRequestPrivate(const AutoScalingPlansRequestPrivate &other, AutoScalingPlansRequest * const q);

    static QString toString(const AutoScalingPlansRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AutoScalingPlansRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
