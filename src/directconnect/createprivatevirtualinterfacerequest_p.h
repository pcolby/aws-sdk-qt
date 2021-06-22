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

#ifndef QTAWS_CREATEPRIVATEVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_CREATEPRIVATEVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "createprivatevirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class CreatePrivateVirtualInterfaceRequest;

class CreatePrivateVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    CreatePrivateVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   CreatePrivateVirtualInterfaceRequest * const q);
    CreatePrivateVirtualInterfaceRequestPrivate(const CreatePrivateVirtualInterfaceRequestPrivate &other,
                                   CreatePrivateVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePrivateVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
