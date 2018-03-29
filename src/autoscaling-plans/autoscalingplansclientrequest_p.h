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

#ifndef QTAWS_AUTOSCALINGPLANSCLIENTREQUEST_P_H
#define QTAWS_AUTOSCALINGPLANSCLIENTREQUEST_P_H

#include "autoscalingplans_p.h"
#include "autoscalingplansclientrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class AutoScalingPlansClientRequest;

class QTAWS_EXPORT AutoScalingPlansClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AutoScalingPlansClientRequest::Action action; ///< AutoScalingPlans action to be performed.
    QString apiVersion;        ///< AutoScalingPlans API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AutoScalingPlans request (query string) parameters. @todo?

    AutoScalingPlansClientRequestPrivate(const AutoScalingPlansClientRequest::Action action, AutoScalingPlansClientRequest * const q);
    AutoScalingPlansClientRequestPrivate(const AutoScalingPlansClientRequestPrivate &other, AutoScalingPlansClientRequest * const q);

    static QString toString(const AutoScalingPlansClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AutoScalingPlansClientRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
