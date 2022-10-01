// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELREQUEST_P_H
#define QTAWS_UPDATECHANNELREQUEST_P_H

#include "chimerequest_p.h"
#include "updatechannelrequest.h"

namespace QtAws {
namespace Chime {

class UpdateChannelRequest;

class UpdateChannelRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateChannelRequestPrivate(const ChimeRequest::Action action,
                                   UpdateChannelRequest * const q);
    UpdateChannelRequestPrivate(const UpdateChannelRequestPrivate &other,
                                   UpdateChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateChannelRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
