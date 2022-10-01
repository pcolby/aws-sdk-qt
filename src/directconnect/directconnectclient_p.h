// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DIRECTCONNECTCLIENT_P_H
#define QTAWS_DIRECTCONNECTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace DirectConnect {

class DirectConnectClient;

class DirectConnectClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DirectConnectClientPrivate(DirectConnectClient * const q);

private:
    Q_DECLARE_PUBLIC(DirectConnectClient)
    Q_DISABLE_COPY(DirectConnectClientPrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
