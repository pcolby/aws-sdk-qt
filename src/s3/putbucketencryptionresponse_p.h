// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETENCRYPTIONRESPONSE_P_H
#define QTAWS_PUTBUCKETENCRYPTIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketEncryptionResponse;

class PutBucketEncryptionResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketEncryptionResponsePrivate(PutBucketEncryptionResponse * const q);

    void parsePutBucketEncryptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketEncryptionResponse)
    Q_DISABLE_COPY(PutBucketEncryptionResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
