// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETREQUEST_P_H
#define QTAWS_DELETEFLEETREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletefleetrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteFleetRequest;

class DeleteFleetRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteFleetRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteFleetRequest * const q);
    DeleteFleetRequestPrivate(const DeleteFleetRequestPrivate &other,
                                   DeleteFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFleetRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
