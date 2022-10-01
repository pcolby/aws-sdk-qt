// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTRETENTIONRESPONSE_P_H
#define QTAWS_PUTOBJECTRETENTIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutObjectRetentionResponse;

class PutObjectRetentionResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutObjectRetentionResponsePrivate(PutObjectRetentionResponse * const q);

    void parsePutObjectRetentionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutObjectRetentionResponse)
    Q_DISABLE_COPY(PutObjectRetentionResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
