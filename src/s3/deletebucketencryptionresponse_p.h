// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETENCRYPTIONRESPONSE_P_H
#define QTAWS_DELETEBUCKETENCRYPTIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteBucketEncryptionResponse;

class DeleteBucketEncryptionResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteBucketEncryptionResponsePrivate(DeleteBucketEncryptionResponse * const q);

    void parseDeleteBucketEncryptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketEncryptionResponse)
    Q_DISABLE_COPY(DeleteBucketEncryptionResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
