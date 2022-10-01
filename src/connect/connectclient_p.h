// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCLIENT_P_H
#define QTAWS_CONNECTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Connect {

class ConnectClient;

class ConnectClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ConnectClientPrivate(ConnectClient * const q);

private:
    Q_DECLARE_PUBLIC(ConnectClient)
    Q_DISABLE_COPY(ConnectClientPrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
