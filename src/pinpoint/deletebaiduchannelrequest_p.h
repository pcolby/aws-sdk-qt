// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBAIDUCHANNELREQUEST_P_H
#define QTAWS_DELETEBAIDUCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deletebaiduchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteBaiduChannelRequest;

class DeleteBaiduChannelRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteBaiduChannelRequestPrivate(const PinpointRequest::Action action,
                                   DeleteBaiduChannelRequest * const q);
    DeleteBaiduChannelRequestPrivate(const DeleteBaiduChannelRequestPrivate &other,
                                   DeleteBaiduChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBaiduChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
