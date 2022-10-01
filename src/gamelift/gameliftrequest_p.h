// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GAMELIFTREQUEST_P_H
#define QTAWS_GAMELIFTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class GameLiftRequest;

class GameLiftRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GameLiftRequest::Action action; ///< GameLift action to be performed.
    QString apiVersion;        ///< GameLift API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< GameLift request (query string) parameters. @todo?

    GameLiftRequestPrivate(const GameLiftRequest::Action action, GameLiftRequest * const q);
    GameLiftRequestPrivate(const GameLiftRequestPrivate &other, GameLiftRequest * const q);

    static QString toString(const GameLiftRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GameLiftRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
