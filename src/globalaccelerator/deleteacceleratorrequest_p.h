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

#ifndef QTAWS_DELETEACCELERATORREQUEST_P_H
#define QTAWS_DELETEACCELERATORREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "deleteacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteAcceleratorRequest;

class QTAWS_EXPORT DeleteAcceleratorRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DeleteAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DeleteAcceleratorRequest * const q);
    DeleteAcceleratorRequestPrivate(const DeleteAcceleratorRequestPrivate &other,
                                   DeleteAcceleratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
