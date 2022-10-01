// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTCLIENTADDINREQUEST_P_H
#define QTAWS_DELETECONNECTCLIENTADDINREQUEST_P_H

#include "workspacesrequest_p.h"
#include "deleteconnectclientaddinrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteConnectClientAddInRequest;

class DeleteConnectClientAddInRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DeleteConnectClientAddInRequestPrivate(const WorkSpacesRequest::Action action,
                                   DeleteConnectClientAddInRequest * const q);
    DeleteConnectClientAddInRequestPrivate(const DeleteConnectClientAddInRequestPrivate &other,
                                   DeleteConnectClientAddInRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConnectClientAddInRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
