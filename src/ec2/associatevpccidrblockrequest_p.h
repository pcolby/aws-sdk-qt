/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_ASSOCIATEVPCCIDRBLOCKREQUEST_P_H
#define QTAWS_ASSOCIATEVPCCIDRBLOCKREQUEST_P_H

#include "ec2request_p.h"
#include "associatevpccidrblockrequest.h"

namespace QtAws {
namespace EC2 {

class AssociateVpcCidrBlockRequest;

class QTAWS_EXPORT AssociateVpcCidrBlockRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateVpcCidrBlockRequestPrivate(const Ec2Request::Action action,
                                   AssociateVpcCidrBlockRequest * const q);
    AssociateVpcCidrBlockRequestPrivate(const AssociateVpcCidrBlockRequestPrivate &other,
                                   AssociateVpcCidrBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateVpcCidrBlockRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
