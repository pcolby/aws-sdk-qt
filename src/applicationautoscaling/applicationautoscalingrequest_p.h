/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_APPLICATIONAUTOSCALINGREQUEST_P_H
#define QTAWS_APPLICATIONAUTOSCALINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "applicationautoscalingrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class ApplicationAutoScalingRequest;

class QTAWS_EXPORT ApplicationAutoScalingRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ApplicationAutoScalingRequest::Action action; ///< ApplicationAutoScaling action to be performed.
    QString apiVersion;        ///< ApplicationAutoScaling API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ApplicationAutoScaling request (query string) parameters. @todo?

    ApplicationAutoScalingRequestPrivate(const ApplicationAutoScalingRequest::Action action, ApplicationAutoScalingRequest * const q);
    ApplicationAutoScalingRequestPrivate(const ApplicationAutoScalingRequestPrivate &other, ApplicationAutoScalingRequest * const q);

    static QString toString(const ApplicationAutoScalingRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ApplicationAutoScalingRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
