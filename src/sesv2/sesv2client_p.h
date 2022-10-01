// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SESV2CLIENT_P_H
#define QTAWS_SESV2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SESv2 {

class SESv2Client;

class SESv2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SESv2ClientPrivate(SESv2Client * const q);

private:
    Q_DECLARE_PUBLIC(SESv2Client)
    Q_DISABLE_COPY(SESv2ClientPrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
