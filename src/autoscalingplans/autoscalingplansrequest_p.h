// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGPLANSREQUEST_P_H
#define QTAWS_AUTOSCALINGPLANSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "autoscalingplansrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class AutoScalingPlansRequest;

class AutoScalingPlansRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
