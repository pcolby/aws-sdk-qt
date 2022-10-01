// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWREQUEST_P_H
#define QTAWS_DELETEFLOWREQUEST_P_H

#include "appflowrequest_p.h"
#include "deleteflowrequest.h"

namespace QtAws {
namespace Appflow {

class DeleteFlowRequest;

class DeleteFlowRequestPrivate : public AppflowRequestPrivate {

public:
    DeleteFlowRequestPrivate(const AppflowRequest::Action action,
                                   DeleteFlowRequest * const q);
    DeleteFlowRequestPrivate(const DeleteFlowRequestPrivate &other,
                                   DeleteFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFlowRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
