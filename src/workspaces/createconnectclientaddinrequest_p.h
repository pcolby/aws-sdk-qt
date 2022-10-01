// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTCLIENTADDINREQUEST_P_H
#define QTAWS_CREATECONNECTCLIENTADDINREQUEST_P_H

#include "workspacesrequest_p.h"
#include "createconnectclientaddinrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateConnectClientAddInRequest;

class CreateConnectClientAddInRequestPrivate : public WorkSpacesRequestPrivate {

public:
    CreateConnectClientAddInRequestPrivate(const WorkSpacesRequest::Action action,
                                   CreateConnectClientAddInRequest * const q);
    CreateConnectClientAddInRequestPrivate(const CreateConnectClientAddInRequestPrivate &other,
                                   CreateConnectClientAddInRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectClientAddInRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
