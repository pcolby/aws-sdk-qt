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

#ifndef QTAWS_CREATEPUBLICIPV4POOLREQUEST_P_H
#define QTAWS_CREATEPUBLICIPV4POOLREQUEST_P_H

#include "ec2request_p.h"
#include "createpublicipv4poolrequest.h"

namespace QtAws {
namespace Ec2 {

class CreatePublicIpv4PoolRequest;

class CreatePublicIpv4PoolRequestPrivate : public Ec2RequestPrivate {

public:
    CreatePublicIpv4PoolRequestPrivate(const Ec2Request::Action action,
                                   CreatePublicIpv4PoolRequest * const q);
    CreatePublicIpv4PoolRequestPrivate(const CreatePublicIpv4PoolRequestPrivate &other,
                                   CreatePublicIpv4PoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePublicIpv4PoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
