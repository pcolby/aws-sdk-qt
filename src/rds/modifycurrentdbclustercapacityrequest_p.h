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

#ifndef QTAWS_MODIFYCURRENTDBCLUSTERCAPACITYREQUEST_P_H
#define QTAWS_MODIFYCURRENTDBCLUSTERCAPACITYREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifycurrentdbclustercapacityrequest.h"

namespace QtAws {
namespace RDS {

class ModifyCurrentDBClusterCapacityRequest;

class QTAWS_EXPORT ModifyCurrentDBClusterCapacityRequestPrivate : public RdsRequestPrivate {

public:
    ModifyCurrentDBClusterCapacityRequestPrivate(const RdsRequest::Action action,
                                   ModifyCurrentDBClusterCapacityRequest * const q);
    ModifyCurrentDBClusterCapacityRequestPrivate(const ModifyCurrentDBClusterCapacityRequestPrivate &other,
                                   ModifyCurrentDBClusterCapacityRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyCurrentDBClusterCapacityRequest)

};

} // namespace RDS
} // namespace QtAws

#endif
