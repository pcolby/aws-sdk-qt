// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GAMESPARKSCLIENT_P_H
#define QTAWS_GAMESPARKSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace GameSparks {

class GameSparksClient;

class GameSparksClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit GameSparksClientPrivate(GameSparksClient * const q);

private:
    Q_DECLARE_PUBLIC(GameSparksClient)
    Q_DISABLE_COPY(GameSparksClientPrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
