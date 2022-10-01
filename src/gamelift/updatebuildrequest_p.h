// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUILDREQUEST_P_H
#define QTAWS_UPDATEBUILDREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updatebuildrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateBuildRequest;

class UpdateBuildRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateBuildRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateBuildRequest * const q);
    UpdateBuildRequestPrivate(const UpdateBuildRequestPrivate &other,
                                   UpdateBuildRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBuildRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
