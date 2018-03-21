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

#ifndef QTAWS_GETBUCKETLIFECYCLECONFIGURATIONRESPONSE_H
#define QTAWS_GETBUCKETLIFECYCLECONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "getbucketlifecycleconfigurationrequest.h"

namespace AWS {

namespace S3 {

class GetBucketLifecycleConfigurationResponsePrivate;

class QTAWS_EXPORT GetBucketLifecycleConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketLifecycleConfigurationResponse(const GetBucketLifecycleConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketLifecycleConfigurationRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetBucketLifecycleConfigurationResponse)
    Q_DISABLE_COPY(GetBucketLifecycleConfigurationResponse)

};

} // namespace S3
} // namespace AWS

#endif
