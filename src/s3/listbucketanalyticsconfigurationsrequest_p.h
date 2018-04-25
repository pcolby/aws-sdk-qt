/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_LISTBUCKETANALYTICSCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTBUCKETANALYTICSCONFIGURATIONSREQUEST_P_H

#include "s3request_p.h"
#include "listbucketanalyticsconfigurationsrequest.h"

namespace QtAws {
namespace S3 {

class ListBucketAnalyticsConfigurationsRequest;

class QTAWS_EXPORT ListBucketAnalyticsConfigurationsRequestPrivate : public S3RequestPrivate {

public:
    ListBucketAnalyticsConfigurationsRequestPrivate(const S3Request::Action action,
                                   ListBucketAnalyticsConfigurationsRequest * const q);
    ListBucketAnalyticsConfigurationsRequestPrivate(const ListBucketAnalyticsConfigurationsRequestPrivate &other,
                                   ListBucketAnalyticsConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBucketAnalyticsConfigurationsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
