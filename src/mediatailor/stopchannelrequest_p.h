// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCHANNELREQUEST_P_H
#define QTAWS_STOPCHANNELREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "stopchannelrequest.h"

namespace QtAws {
namespace MediaTailor {

class StopChannelRequest;

class StopChannelRequestPrivate : public MediaTailorRequestPrivate {

public:
    StopChannelRequestPrivate(const MediaTailorRequest::Action action,
                                   StopChannelRequest * const q);
    StopChannelRequestPrivate(const StopChannelRequestPrivate &other,
                                   StopChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopChannelRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
