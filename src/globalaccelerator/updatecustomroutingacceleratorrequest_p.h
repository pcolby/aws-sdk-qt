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

#ifndef QTAWS_UPDATECUSTOMROUTINGACCELERATORREQUEST_P_H
#define QTAWS_UPDATECUSTOMROUTINGACCELERATORREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "updatecustomroutingacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingAcceleratorRequest;

class QTAWS_EXPORT UpdateCustomRoutingAcceleratorRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    UpdateCustomRoutingAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   UpdateCustomRoutingAcceleratorRequest * const q);
    UpdateCustomRoutingAcceleratorRequestPrivate(const UpdateCustomRoutingAcceleratorRequestPrivate &other,
                                   UpdateCustomRoutingAcceleratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCustomRoutingAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
