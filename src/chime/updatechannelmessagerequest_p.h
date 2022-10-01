// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELMESSAGEREQUEST_P_H
#define QTAWS_UPDATECHANNELMESSAGEREQUEST_P_H

#include "chimerequest_p.h"
#include "updatechannelmessagerequest.h"

namespace QtAws {
namespace Chime {

class UpdateChannelMessageRequest;

class UpdateChannelMessageRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateChannelMessageRequestPrivate(const ChimeRequest::Action action,
                                   UpdateChannelMessageRequest * const q);
    UpdateChannelMessageRequestPrivate(const UpdateChannelMessageRequestPrivate &other,
                                   UpdateChannelMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateChannelMessageRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
