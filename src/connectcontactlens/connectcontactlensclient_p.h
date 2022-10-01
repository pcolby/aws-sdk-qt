// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCONTACTLENSCLIENT_P_H
#define QTAWS_CONNECTCONTACTLENSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ConnectContactLens {

class ConnectContactLensClient;

class ConnectContactLensClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ConnectContactLensClientPrivate(ConnectContactLensClient * const q);

private:
    Q_DECLARE_PUBLIC(ConnectContactLensClient)
    Q_DISABLE_COPY(ConnectContactLensClientPrivate)

};

} // namespace ConnectContactLens
} // namespace QtAws

#endif
