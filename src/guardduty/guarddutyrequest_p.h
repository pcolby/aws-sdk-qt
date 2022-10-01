// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GUARDDUTYREQUEST_P_H
#define QTAWS_GUARDDUTYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class GuardDutyRequest;

class GuardDutyRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GuardDutyRequest::Action action; ///< GuardDuty action to be performed.
    QString apiVersion;        ///< GuardDuty API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< GuardDuty request (query string) parameters. @todo?

    GuardDutyRequestPrivate(const GuardDutyRequest::Action action, GuardDutyRequest * const q);
    GuardDutyRequestPrivate(const GuardDutyRequestPrivate &other, GuardDutyRequest * const q);

    static QString toString(const GuardDutyRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GuardDutyRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
