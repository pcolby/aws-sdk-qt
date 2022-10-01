// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3CLIENT_P_H
#define QTAWS_S3CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace S3 {

class S3Client;

class S3ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit S3ClientPrivate(S3Client * const q);

private:
    Q_DECLARE_PUBLIC(S3Client)
    Q_DISABLE_COPY(S3ClientPrivate)

};

} // namespace S3
} // namespace QtAws

#endif
