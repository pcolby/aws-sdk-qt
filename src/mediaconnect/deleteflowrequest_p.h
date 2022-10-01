// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWREQUEST_P_H
#define QTAWS_DELETEFLOWREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "deleteflowrequest.h"

namespace QtAws {
namespace MediaConnect {

class DeleteFlowRequest;

class DeleteFlowRequestPrivate : public MediaConnectRequestPrivate {

public:
    DeleteFlowRequestPrivate(const MediaConnectRequest::Action action,
                                   DeleteFlowRequest * const q);
    DeleteFlowRequestPrivate(const DeleteFlowRequestPrivate &other,
                                   DeleteFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFlowRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
