// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELBANREQUEST_P_H
#define QTAWS_CREATECHANNELBANREQUEST_P_H

#include "chimerequest_p.h"
#include "createchannelbanrequest.h"

namespace QtAws {
namespace Chime {

class CreateChannelBanRequest;

class CreateChannelBanRequestPrivate : public ChimeRequestPrivate {

public:
    CreateChannelBanRequestPrivate(const ChimeRequest::Action action,
                                   CreateChannelBanRequest * const q);
    CreateChannelBanRequestPrivate(const CreateChannelBanRequestPrivate &other,
                                   CreateChannelBanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChannelBanRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
