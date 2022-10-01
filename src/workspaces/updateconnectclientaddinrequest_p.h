// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTCLIENTADDINREQUEST_P_H
#define QTAWS_UPDATECONNECTCLIENTADDINREQUEST_P_H

#include "workspacesrequest_p.h"
#include "updateconnectclientaddinrequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateConnectClientAddInRequest;

class UpdateConnectClientAddInRequestPrivate : public WorkSpacesRequestPrivate {

public:
    UpdateConnectClientAddInRequestPrivate(const WorkSpacesRequest::Action action,
                                   UpdateConnectClientAddInRequest * const q);
    UpdateConnectClientAddInRequestPrivate(const UpdateConnectClientAddInRequestPrivate &other,
                                   UpdateConnectClientAddInRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConnectClientAddInRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
