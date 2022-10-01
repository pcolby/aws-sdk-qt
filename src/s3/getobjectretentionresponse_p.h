// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTRETENTIONRESPONSE_P_H
#define QTAWS_GETOBJECTRETENTIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetObjectRetentionResponse;

class GetObjectRetentionResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetObjectRetentionResponsePrivate(GetObjectRetentionResponse * const q);

    void parseGetObjectRetentionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectRetentionResponse)
    Q_DISABLE_COPY(GetObjectRetentionResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
