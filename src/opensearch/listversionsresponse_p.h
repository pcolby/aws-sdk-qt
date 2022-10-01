// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERSIONSRESPONSE_P_H
#define QTAWS_LISTVERSIONSRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class ListVersionsResponse;

class ListVersionsResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit ListVersionsResponsePrivate(ListVersionsResponse * const q);

    void parseListVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVersionsResponse)
    Q_DISABLE_COPY(ListVersionsResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
