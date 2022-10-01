// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETENCRYPTIONRESPONSE_H
#define QTAWS_GETBUCKETENCRYPTIONRESPONSE_H

#include "s3response.h"
#include "getbucketencryptionrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketEncryptionResponsePrivate;

class QTAWSS3_EXPORT GetBucketEncryptionResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketEncryptionResponse(const GetBucketEncryptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketEncryptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketEncryptionResponse)
    Q_DISABLE_COPY(GetBucketEncryptionResponse)

};

} // namespace S3
} // namespace QtAws

#endif
