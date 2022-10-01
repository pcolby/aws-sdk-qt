// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3OUTPOSTSCLIENT_P_H
#define QTAWS_S3OUTPOSTSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace S3Outposts {

class S3OutpostsClient;

class S3OutpostsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit S3OutpostsClientPrivate(S3OutpostsClient * const q);

private:
    Q_DECLARE_PUBLIC(S3OutpostsClient)
    Q_DISABLE_COPY(S3OutpostsClientPrivate)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
