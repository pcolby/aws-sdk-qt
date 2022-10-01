// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCRIPTREQUEST_P_H
#define QTAWS_CREATESCRIPTREQUEST_P_H

#include "gameliftrequest_p.h"
#include "createscriptrequest.h"

namespace QtAws {
namespace GameLift {

class CreateScriptRequest;

class CreateScriptRequestPrivate : public GameLiftRequestPrivate {

public:
    CreateScriptRequestPrivate(const GameLiftRequest::Action action,
                                   CreateScriptRequest * const q);
    CreateScriptRequestPrivate(const CreateScriptRequestPrivate &other,
                                   CreateScriptRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateScriptRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
