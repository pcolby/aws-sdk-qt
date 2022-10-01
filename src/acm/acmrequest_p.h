// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACMREQUEST_P_H
#define QTAWS_ACMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class AcmRequest;

class AcmRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AcmRequest::Action action; ///< Acm action to be performed.
    QString apiVersion;        ///< Acm API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Acm request (query string) parameters. @todo?

    AcmRequestPrivate(const AcmRequest::Action action, AcmRequest * const q);
    AcmRequestPrivate(const AcmRequestPrivate &other, AcmRequest * const q);

    static QString toString(const AcmRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AcmRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
