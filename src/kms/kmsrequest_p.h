// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KMSREQUEST_P_H
#define QTAWS_KMSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class KmsRequest;

class KmsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KmsRequest::Action action; ///< Kms action to be performed.
    QString apiVersion;        ///< Kms API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Kms request (query string) parameters. @todo?

    KmsRequestPrivate(const KmsRequest::Action action, KmsRequest * const q);
    KmsRequestPrivate(const KmsRequestPrivate &other, KmsRequest * const q);

    static QString toString(const KmsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KmsRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
