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

#ifndef QTAWS_UPDATECAPACITYPROVIDERREQUEST_P_H
#define QTAWS_UPDATECAPACITYPROVIDERREQUEST_P_H

#include "ecsrequest_p.h"
#include "updatecapacityproviderrequest.h"

namespace QtAws {
namespace ECS {

class UpdateCapacityProviderRequest;

class QTAWS_EXPORT UpdateCapacityProviderRequestPrivate : public EcsRequestPrivate {

public:
    UpdateCapacityProviderRequestPrivate(const EcsRequest::Action action,
                                   UpdateCapacityProviderRequest * const q);
    UpdateCapacityProviderRequestPrivate(const UpdateCapacityProviderRequestPrivate &other,
                                   UpdateCapacityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCapacityProviderRequest)

};

} // namespace ECS
} // namespace QtAws

#endif
