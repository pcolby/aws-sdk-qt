// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSBASICCREDENTIALS_P_H
#define AWSBASICCREDENTIALS_P_H

#include "awsabstractcredentials_p.h"

#include <QString>

namespace QtAws {
namespace Core {

class AwsBasicCredentials;

class AwsBasicCredentialsPrivate : public AwsAbstractCredentialsPrivate {

public:
    QString accessKeyId; ///< AWS Access Key ID.
    QString secretKey;   ///< AWS Secret Access Key.
    QString token;       ///< AWS Security Token.

    explicit AwsBasicCredentialsPrivate(AwsBasicCredentials * const q);

private:
    Q_DECLARE_PUBLIC(AwsBasicCredentials)
    Q_DISABLE_COPY(AwsBasicCredentialsPrivate)

};

} // namespace Core
} // namespace QtAws

#endif
