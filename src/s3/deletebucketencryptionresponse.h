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

#ifndef QTAWS_DELETEBUCKETENCRYPTIONRESPONSE_H
#define QTAWS_DELETEBUCKETENCRYPTIONRESPONSE_H

#include "s3response.h"
#include "deletebucketencryptionrequest.h"

namespace AWS {

namespace S3 {

class DeleteBucketEncryptionResponsePrivate;

class QTAWS_EXPORT DeleteBucketEncryptionResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketEncryptionResponse(const DeleteBucketEncryptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketEncryptionRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteBucketEncryptionResponse)
    Q_DISABLE_COPY(DeleteBucketEncryptionResponse)

};

} // namespace S3
} // namespace AWS

#endif
