// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPSWORKSCMREQUEST_P_H
#define QTAWS_OPSWORKSCMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class OpsWorksCmRequest;

class OpsWorksCmRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    OpsWorksCmRequest::Action action; ///< OpsWorksCm action to be performed.
    QString apiVersion;        ///< OpsWorksCm API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< OpsWorksCm request (query string) parameters. @todo?

    OpsWorksCmRequestPrivate(const OpsWorksCmRequest::Action action, OpsWorksCmRequest * const q);
    OpsWorksCmRequestPrivate(const OpsWorksCmRequestPrivate &other, OpsWorksCmRequest * const q);

    static QString toString(const OpsWorksCmRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(OpsWorksCmRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
