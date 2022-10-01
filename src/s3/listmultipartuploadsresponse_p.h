// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPARTUPLOADSRESPONSE_P_H
#define QTAWS_LISTMULTIPARTUPLOADSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class ListMultipartUploadsResponse;

class ListMultipartUploadsResponsePrivate : public S3ResponsePrivate {

public:

    explicit ListMultipartUploadsResponsePrivate(ListMultipartUploadsResponse * const q);

    void parseListMultipartUploadsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMultipartUploadsResponse)
    Q_DISABLE_COPY(ListMultipartUploadsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
