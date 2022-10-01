// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GREENGRASSV2CLIENT_P_H
#define QTAWS_GREENGRASSV2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace GreengrassV2 {

class GreengrassV2Client;

class GreengrassV2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit GreengrassV2ClientPrivate(GreengrassV2Client * const q);

private:
    Q_DECLARE_PUBLIC(GreengrassV2Client)
    Q_DISABLE_COPY(GreengrassV2ClientPrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
