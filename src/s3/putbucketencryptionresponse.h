// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETENCRYPTIONRESPONSE_H
#define QTAWS_PUTBUCKETENCRYPTIONRESPONSE_H

#include "s3response.h"
#include "putbucketencryptionrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketEncryptionResponsePrivate;

class QTAWSS3_EXPORT PutBucketEncryptionResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketEncryptionResponse(const PutBucketEncryptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketEncryptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketEncryptionResponse)
    Q_DISABLE_COPY(PutBucketEncryptionResponse)

};

} // namespace S3
} // namespace QtAws

#endif
