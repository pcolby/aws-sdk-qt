// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GAMESPARKSREQUEST_P_H
#define QTAWS_GAMESPARKSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class GameSparksRequest;

class GameSparksRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GameSparksRequest::Action action; ///< GameSparks action to be performed.
    QString apiVersion;        ///< GameSparks API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< GameSparks request (query string) parameters. @todo?

    GameSparksRequestPrivate(const GameSparksRequest::Action action, GameSparksRequest * const q);
    GameSparksRequestPrivate(const GameSparksRequestPrivate &other, GameSparksRequest * const q);

    static QString toString(const GameSparksRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GameSparksRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
