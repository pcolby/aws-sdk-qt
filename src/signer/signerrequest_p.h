// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNERREQUEST_P_H
#define QTAWS_SIGNERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class SignerRequest;

class SignerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SignerRequest::Action action; ///< Signer action to be performed.
    QString apiVersion;        ///< Signer API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Signer request (query string) parameters. @todo?

    SignerRequestPrivate(const SignerRequest::Action action, SignerRequest * const q);
    SignerRequestPrivate(const SignerRequestPrivate &other, SignerRequest * const q);

    static QString toString(const SignerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SignerRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
