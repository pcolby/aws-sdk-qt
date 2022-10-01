// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUILDREQUEST_P_H
#define QTAWS_CREATEBUILDREQUEST_P_H

#include "gameliftrequest_p.h"
#include "createbuildrequest.h"

namespace QtAws {
namespace GameLift {

class CreateBuildRequest;

class CreateBuildRequestPrivate : public GameLiftRequestPrivate {

public:
    CreateBuildRequestPrivate(const GameLiftRequest::Action action,
                                   CreateBuildRequest * const q);
    CreateBuildRequestPrivate(const CreateBuildRequestPrivate &other,
                                   CreateBuildRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBuildRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
