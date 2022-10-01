// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHANNELREQUEST_P_H
#define QTAWS_STARTCHANNELREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "startchannelrequest.h"

namespace QtAws {
namespace MediaTailor {

class StartChannelRequest;

class StartChannelRequestPrivate : public MediaTailorRequestPrivate {

public:
    StartChannelRequestPrivate(const MediaTailorRequest::Action action,
                                   StartChannelRequest * const q);
    StartChannelRequestPrivate(const StartChannelRequestPrivate &other,
                                   StartChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartChannelRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
