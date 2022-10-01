// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SECRETSMANAGERREQUEST_P_H
#define QTAWS_SECRETSMANAGERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class SecretsManagerRequest;

class SecretsManagerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SecretsManagerRequest::Action action; ///< SecretsManager action to be performed.
    QString apiVersion;        ///< SecretsManager API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SecretsManager request (query string) parameters. @todo?

    SecretsManagerRequestPrivate(const SecretsManagerRequest::Action action, SecretsManagerRequest * const q);
    SecretsManagerRequestPrivate(const SecretsManagerRequestPrivate &other, SecretsManagerRequest * const q);

    static QString toString(const SecretsManagerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SecretsManagerRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
