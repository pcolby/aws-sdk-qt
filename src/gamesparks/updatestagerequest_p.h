// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTAGEREQUEST_P_H
#define QTAWS_UPDATESTAGEREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "updatestagerequest.h"

namespace QtAws {
namespace GameSparks {

class UpdateStageRequest;

class UpdateStageRequestPrivate : public GameSparksRequestPrivate {

public:
    UpdateStageRequestPrivate(const GameSparksRequest::Action action,
                                   UpdateStageRequest * const q);
    UpdateStageRequestPrivate(const UpdateStageRequestPrivate &other,
                                   UpdateStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStageRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
