// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMODERATORREQUEST_P_H
#define QTAWS_DELETECHANNELMODERATORREQUEST_P_H

#include "chimerequest_p.h"
#include "deletechannelmoderatorrequest.h"

namespace QtAws {
namespace Chime {

class DeleteChannelModeratorRequest;

class DeleteChannelModeratorRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteChannelModeratorRequestPrivate(const ChimeRequest::Action action,
                                   DeleteChannelModeratorRequest * const q);
    DeleteChannelModeratorRequestPrivate(const DeleteChannelModeratorRequestPrivate &other,
                                   DeleteChannelModeratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelModeratorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
