// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTSRESPONSE_P_H
#define QTAWS_LISTOBJECTSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class ListObjectsResponse;

class ListObjectsResponsePrivate : public S3ResponsePrivate {

public:

    explicit ListObjectsResponsePrivate(ListObjectsResponse * const q);

    void parseListObjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListObjectsResponse)
    Q_DISABLE_COPY(ListObjectsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
