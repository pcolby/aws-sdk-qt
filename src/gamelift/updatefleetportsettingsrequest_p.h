// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETPORTSETTINGSREQUEST_P_H
#define QTAWS_UPDATEFLEETPORTSETTINGSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updatefleetportsettingsrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetPortSettingsRequest;

class UpdateFleetPortSettingsRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateFleetPortSettingsRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateFleetPortSettingsRequest * const q);
    UpdateFleetPortSettingsRequestPrivate(const UpdateFleetPortSettingsRequestPrivate &other,
                                   UpdateFleetPortSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFleetPortSettingsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
