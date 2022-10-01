// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETSRESPONSE_P_H
#define QTAWS_LISTBUCKETSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class ListBucketsResponse;

class ListBucketsResponsePrivate : public S3ResponsePrivate {

public:

    explicit ListBucketsResponsePrivate(ListBucketsResponse * const q);

    void parseListBucketsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBucketsResponse)
    Q_DISABLE_COPY(ListBucketsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
