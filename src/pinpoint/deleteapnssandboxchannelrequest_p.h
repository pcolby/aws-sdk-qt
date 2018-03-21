/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETEAPNSSANDBOXCHANNELREQUEST_P_H
#define QTAWS_DELETEAPNSSANDBOXCHANNELREQUEST_P_H

#include "pinpoint_p.h"
#include "deleteapnssandboxchannelrequest.h"

namespace AWS {

namespace Pinpoint {

class DeleteApnsSandboxChannelRequest;

class QTAWS_EXPORT DeleteApnsSandboxChannelRequestPrivate : public PinpointPrivate {

public:
    DeleteApnsSandboxChannelRequestPrivate(const Pinpoint::Action action,
                                   DeleteApnsSandboxChannelRequest * const q);
    DeleteApnsSandboxChannelRequestPrivate(const DeleteApnsSandboxChannelRequestPrivate &other,
                                   DeleteApnsSandboxChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApnsSandboxChannelRequest)

};

} // namespace Pinpoint
} // namespace AWS

#endif
