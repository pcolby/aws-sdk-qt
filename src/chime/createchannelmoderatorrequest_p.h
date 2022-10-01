// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELMODERATORREQUEST_P_H
#define QTAWS_CREATECHANNELMODERATORREQUEST_P_H

#include "chimerequest_p.h"
#include "createchannelmoderatorrequest.h"

namespace QtAws {
namespace Chime {

class CreateChannelModeratorRequest;

class CreateChannelModeratorRequestPrivate : public ChimeRequestPrivate {

public:
    CreateChannelModeratorRequestPrivate(const ChimeRequest::Action action,
                                   CreateChannelModeratorRequest * const q);
    CreateChannelModeratorRequestPrivate(const CreateChannelModeratorRequestPrivate &other,
                                   CreateChannelModeratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChannelModeratorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
