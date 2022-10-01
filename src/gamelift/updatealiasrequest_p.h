// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALIASREQUEST_P_H
#define QTAWS_UPDATEALIASREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updatealiasrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateAliasRequest;

class UpdateAliasRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateAliasRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateAliasRequest * const q);
    UpdateAliasRequestPrivate(const UpdateAliasRequestPrivate &other,
                                   UpdateAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAliasRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
