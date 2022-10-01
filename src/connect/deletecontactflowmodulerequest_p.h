// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTFLOWMODULEREQUEST_P_H
#define QTAWS_DELETECONTACTFLOWMODULEREQUEST_P_H

#include "connectrequest_p.h"
#include "deletecontactflowmodulerequest.h"

namespace QtAws {
namespace Connect {

class DeleteContactFlowModuleRequest;

class DeleteContactFlowModuleRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteContactFlowModuleRequestPrivate(const ConnectRequest::Action action,
                                   DeleteContactFlowModuleRequest * const q);
    DeleteContactFlowModuleRequestPrivate(const DeleteContactFlowModuleRequestPrivate &other,
                                   DeleteContactFlowModuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContactFlowModuleRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
