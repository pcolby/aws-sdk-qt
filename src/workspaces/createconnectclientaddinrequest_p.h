/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
