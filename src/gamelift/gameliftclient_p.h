// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GAMELIFTCLIENT_P_H
#define QTAWS_GAMELIFTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace GameLift {

class GameLiftClient;

class GameLiftClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit GameLiftClientPrivate(GameLiftClient * const q);

private:
    Q_DECLARE_PUBLIC(GameLiftClient)
    Q_DISABLE_COPY(GameLiftClientPrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
