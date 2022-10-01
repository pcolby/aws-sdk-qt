// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPARTUPLOADSRESPONSE_P_H
#define QTAWS_LISTMULTIPARTUPLOADSRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class ListMultipartUploadsResponse;

class ListMultipartUploadsResponsePrivate : public GlacierResponsePrivate {

public:

    explicit ListMultipartUploadsResponsePrivate(ListMultipartUploadsResponse * const q);

    void parseListMultipartUploadsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMultipartUploadsResponse)
    Q_DISABLE_COPY(ListMultipartUploadsResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
