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

#ifndef QTAWS_AUTOSCALINGCLIENTREQUEST_P_H
#define QTAWS_AUTOSCALINGCLIENTREQUEST_P_H

#include "autoscaling_p.h"
#include "autoscalingclientrequest.h"

namespace QtAws {
namespace AutoScaling {

class AutoScalingClientRequest;

class QTAWS_EXPORT AutoScalingClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AutoScalingClientRequest::Action action; ///< AutoScaling action to be performed.
    QString apiVersion;        ///< AutoScaling API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AutoScaling request (query string) parameters. @todo?

    AutoScalingClientRequestPrivate(const AutoScalingClientRequest::Action action, AutoScalingClientRequest * const q);
    AutoScalingClientRequestPrivate(const AutoScalingClientRequestPrivate &other, AutoScalingClientRequest * const q);

    static QString toString(const AutoScalingClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AutoScalingClientRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
