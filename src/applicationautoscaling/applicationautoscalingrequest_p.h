// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONAUTOSCALINGREQUEST_P_H
#define QTAWS_APPLICATIONAUTOSCALINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "applicationautoscalingrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class ApplicationAutoScalingRequest;

class ApplicationAutoScalingRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
