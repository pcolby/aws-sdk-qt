// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWMEDIASTREAMREQUEST_P_H
#define QTAWS_UPDATEFLOWMEDIASTREAMREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "updateflowmediastreamrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowMediaStreamRequest;

class UpdateFlowMediaStreamRequestPrivate : public MediaConnectRequestPrivate {

public:
    UpdateFlowMediaStreamRequestPrivate(const MediaConnectRequest::Action action,
                                   UpdateFlowMediaStreamRequest * const q);
    UpdateFlowMediaStreamRequestPrivate(const UpdateFlowMediaStreamRequestPrivate &other,
                                   UpdateFlowMediaStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFlowMediaStreamRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
