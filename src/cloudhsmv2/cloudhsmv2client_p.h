// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMV2CLIENT_P_H
#define QTAWS_CLOUDHSMV2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CloudHsmV2 {

class CloudHsmV2Client;

class CloudHsmV2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CloudHsmV2ClientPrivate(CloudHsmV2Client * const q);

private:
    Q_DECLARE_PUBLIC(CloudHsmV2Client)
    Q_DISABLE_COPY(CloudHsmV2ClientPrivate)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
