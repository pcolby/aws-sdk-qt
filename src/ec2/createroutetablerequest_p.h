/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEROUTETABLEREQUEST_P_H
#define QTAWS_CREATEROUTETABLEREQUEST_P_H

#include "ec2_p.h"
#include "createroutetablerequest.h"

namespace AWS {

namespace EC2 {

class CreateRouteTableRequest;

class QTAWS_EXPORT CreateRouteTableRequestPrivate : public EC2Private {

public:
    CreateRouteTableRequestPrivate(const EC2::Action action,
                                   CreateRouteTableRequest * const q);
    CreateRouteTableRequestPrivate(const CreateRouteTableRequestPrivate &other,
                                   CreateRouteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRouteTableRequest)

};

} // namespace EC2
} // namespace AWS

#endif
