// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTVERSIONSRESPONSE_P_H
#define QTAWS_LISTOBJECTVERSIONSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class ListObjectVersionsResponse;

class ListObjectVersionsResponsePrivate : public S3ResponsePrivate {

public:

    explicit ListObjectVersionsResponsePrivate(ListObjectVersionsResponse * const q);

    void parseListObjectVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListObjectVersionsResponse)
    Q_DISABLE_COPY(ListObjectVersionsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
