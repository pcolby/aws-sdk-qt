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

#ifndef QTAWS_LISTS3BUCKETSREQUEST_P_H
#define QTAWS_LISTS3BUCKETSREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "lists3bucketsrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ListS3BucketsRequest;

class ListS3BucketsRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    ListS3BucketsRequestPrivate(const AmplifyBackendRequest::Action action,
                                   ListS3BucketsRequest * const q);
    ListS3BucketsRequestPrivate(const ListS3BucketsRequestPrivate &other,
                                   ListS3BucketsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListS3BucketsRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
