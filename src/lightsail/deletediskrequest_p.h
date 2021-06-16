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

#ifndef QTAWS_DELETEDISKREQUEST_P_H
#define QTAWS_DELETEDISKREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deletediskrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteDiskRequest;

class QTAWS_EXPORT DeleteDiskRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteDiskRequestPrivate(const LightsailRequest::Action action,
                                   DeleteDiskRequest * const q);
    DeleteDiskRequestPrivate(const DeleteDiskRequestPrivate &other,
                                   DeleteDiskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDiskRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
