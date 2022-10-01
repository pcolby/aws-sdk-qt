// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVEALIASREQUEST_P_H
#define QTAWS_RESOLVEALIASREQUEST_P_H

#include "gameliftrequest_p.h"
#include "resolvealiasrequest.h"

namespace QtAws {
namespace GameLift {

class ResolveAliasRequest;

class ResolveAliasRequestPrivate : public GameLiftRequestPrivate {

public:
    ResolveAliasRequestPrivate(const GameLiftRequest::Action action,
                                   ResolveAliasRequest * const q);
    ResolveAliasRequestPrivate(const ResolveAliasRequestPrivate &other,
                                   ResolveAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResolveAliasRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
