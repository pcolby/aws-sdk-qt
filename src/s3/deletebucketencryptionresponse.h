// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETENCRYPTIONRESPONSE_H
#define QTAWS_DELETEBUCKETENCRYPTIONRESPONSE_H

#include "s3response.h"
#include "deletebucketencryptionrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketEncryptionResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketEncryptionResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketEncryptionResponse(const DeleteBucketEncryptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketEncryptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketEncryptionResponse)
    Q_DISABLE_COPY(DeleteBucketEncryptionResponse)

};

} // namespace S3
} // namespace QtAws

#endif
