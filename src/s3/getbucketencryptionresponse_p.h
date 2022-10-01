// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETENCRYPTIONRESPONSE_P_H
#define QTAWS_GETBUCKETENCRYPTIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketEncryptionResponse;

class GetBucketEncryptionResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketEncryptionResponsePrivate(GetBucketEncryptionResponse * const q);

    void parseGetBucketEncryptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketEncryptionResponse)
    Q_DISABLE_COPY(GetBucketEncryptionResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
