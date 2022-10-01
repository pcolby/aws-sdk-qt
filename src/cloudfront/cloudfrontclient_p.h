// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDFRONTCLIENT_P_H
#define QTAWS_CLOUDFRONTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CloudFront {

class CloudFrontClient;

class CloudFrontClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CloudFrontClientPrivate(CloudFrontClient * const q);

private:
    Q_DECLARE_PUBLIC(CloudFrontClient)
    Q_DISABLE_COPY(CloudFrontClientPrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
