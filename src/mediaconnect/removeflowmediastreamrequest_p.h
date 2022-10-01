// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWMEDIASTREAMREQUEST_P_H
#define QTAWS_REMOVEFLOWMEDIASTREAMREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "removeflowmediastreamrequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowMediaStreamRequest;

class RemoveFlowMediaStreamRequestPrivate : public MediaConnectRequestPrivate {

public:
    RemoveFlowMediaStreamRequestPrivate(const MediaConnectRequest::Action action,
                                   RemoveFlowMediaStreamRequest * const q);
    RemoveFlowMediaStreamRequestPrivate(const RemoveFlowMediaStreamRequestPrivate &other,
                                   RemoveFlowMediaStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveFlowMediaStreamRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
