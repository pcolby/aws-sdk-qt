// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIACONNECTCLIENT_P_H
#define QTAWS_MEDIACONNECTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MediaConnect {

class MediaConnectClient;

class MediaConnectClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MediaConnectClientPrivate(MediaConnectClient * const q);

private:
    Q_DECLARE_PUBLIC(MediaConnectClient)
    Q_DISABLE_COPY(MediaConnectClientPrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
