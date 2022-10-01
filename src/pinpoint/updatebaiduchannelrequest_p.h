// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBAIDUCHANNELREQUEST_P_H
#define QTAWS_UPDATEBAIDUCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updatebaiduchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateBaiduChannelRequest;

class UpdateBaiduChannelRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateBaiduChannelRequestPrivate(const PinpointRequest::Action action,
                                   UpdateBaiduChannelRequest * const q);
    UpdateBaiduChannelRequestPrivate(const UpdateBaiduChannelRequestPrivate &other,
                                   UpdateBaiduChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBaiduChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
