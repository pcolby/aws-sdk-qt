// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAVINGSPLANSREQUEST_P_H
#define QTAWS_SAVINGSPLANSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "savingsplansrequest.h"

namespace QtAws {
namespace SavingsPlans {

class SavingsPlansRequest;

class SavingsPlansRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SavingsPlansRequest::Action action; ///< SavingsPlans action to be performed.
    QString apiVersion;        ///< SavingsPlans API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SavingsPlans request (query string) parameters. @todo?

    SavingsPlansRequestPrivate(const SavingsPlansRequest::Action action, SavingsPlansRequest * const q);
    SavingsPlansRequestPrivate(const SavingsPlansRequestPrivate &other, SavingsPlansRequest * const q);

    static QString toString(const SavingsPlansRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SavingsPlansRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
