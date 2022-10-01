// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTSV2RESPONSE_P_H
#define QTAWS_LISTOBJECTSV2RESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class ListObjectsV2Response;

class ListObjectsV2ResponsePrivate : public S3ResponsePrivate {

public:

    explicit ListObjectsV2ResponsePrivate(ListObjectsV2Response * const q);

    void parseListObjectsV2Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListObjectsV2Response)
    Q_DISABLE_COPY(ListObjectsV2ResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
