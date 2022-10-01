// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETATTRIBUTESREQUEST_P_H
#define QTAWS_UPDATEFLEETATTRIBUTESREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updatefleetattributesrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetAttributesRequest;

class UpdateFleetAttributesRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateFleetAttributesRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateFleetAttributesRequest * const q);
    UpdateFleetAttributesRequestPrivate(const UpdateFleetAttributesRequestPrivate &other,
                                   UpdateFleetAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFleetAttributesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
