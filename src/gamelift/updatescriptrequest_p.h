// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCRIPTREQUEST_P_H
#define QTAWS_UPDATESCRIPTREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updatescriptrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateScriptRequest;

class UpdateScriptRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateScriptRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateScriptRequest * const q);
    UpdateScriptRequestPrivate(const UpdateScriptRequestPrivate &other,
                                   UpdateScriptRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateScriptRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
