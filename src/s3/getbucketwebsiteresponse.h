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

#ifndef QTAWS_GETBUCKETWEBSITERESPONSE_H
#define QTAWS_GETBUCKETWEBSITERESPONSE_H

#include "s3response.h"
#include "getbucketwebsiterequest.h"

namespace AWS {

namespace S3 {

class GetBucketWebsiteResponsePrivate;

class QTAWS_EXPORT GetBucketWebsiteResponse : public GetBucketWebsiteResponse {
    Q_OBJECT

public:
    GetBucketWebsiteResponse(const GetBucketWebsiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketWebsiteRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetBucketWebsiteResponse)
    Q_DISABLE_COPY(GetBucketWebsiteResponse)

};

} // namespace S3
} // namespace AWS

#endif
