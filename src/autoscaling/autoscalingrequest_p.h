// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGREQUEST_P_H
#define QTAWS_AUTOSCALINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class AutoScalingRequest;

class AutoScalingRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AutoScalingRequest::Action action; ///< AutoScaling action to be performed.
    QString apiVersion;        ///< AutoScaling API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AutoScaling request (query string) parameters. @todo?

    AutoScalingRequestPrivate(const AutoScalingRequest::Action action, AutoScalingRequest * const q);
    AutoScalingRequestPrivate(const AutoScalingRequestPrivate &other, AutoScalingRequest * const q);

    static QString toString(const AutoScalingRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AutoScalingRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
