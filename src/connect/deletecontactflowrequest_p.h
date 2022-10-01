// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTFLOWREQUEST_P_H
#define QTAWS_DELETECONTACTFLOWREQUEST_P_H

#include "connectrequest_p.h"
#include "deletecontactflowrequest.h"

namespace QtAws {
namespace Connect {

class DeleteContactFlowRequest;

class DeleteContactFlowRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteContactFlowRequestPrivate(const ConnectRequest::Action action,
                                   DeleteContactFlowRequest * const q);
    DeleteContactFlowRequestPrivate(const DeleteContactFlowRequestPrivate &other,
                                   DeleteContactFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContactFlowRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
