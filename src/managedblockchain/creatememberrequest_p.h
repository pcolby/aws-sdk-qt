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

#ifndef QTAWS_CREATEMEMBERREQUEST_P_H
#define QTAWS_CREATEMEMBERREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "creatememberrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateMemberRequest;

class CreateMemberRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    CreateMemberRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   CreateMemberRequest * const q);
    CreateMemberRequestPrivate(const CreateMemberRequestPrivate &other,
                                   CreateMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMemberRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
