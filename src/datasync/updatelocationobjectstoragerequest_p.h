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

#ifndef QTAWS_UPDATELOCATIONOBJECTSTORAGEREQUEST_P_H
#define QTAWS_UPDATELOCATIONOBJECTSTORAGEREQUEST_P_H

#include "datasyncrequest_p.h"
#include "updatelocationobjectstoragerequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationObjectStorageRequest;

class QTAWS_EXPORT UpdateLocationObjectStorageRequestPrivate : public DataSyncRequestPrivate {

public:
    UpdateLocationObjectStorageRequestPrivate(const DataSyncRequest::Action action,
                                   UpdateLocationObjectStorageRequest * const q);
    UpdateLocationObjectStorageRequestPrivate(const UpdateLocationObjectStorageRequestPrivate &other,
                                   UpdateLocationObjectStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLocationObjectStorageRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
