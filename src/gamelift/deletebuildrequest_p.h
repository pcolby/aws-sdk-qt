// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUILDREQUEST_P_H
#define QTAWS_DELETEBUILDREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletebuildrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteBuildRequest;

class DeleteBuildRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteBuildRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteBuildRequest * const q);
    DeleteBuildRequestPrivate(const DeleteBuildRequestPrivate &other,
                                   DeleteBuildRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBuildRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
