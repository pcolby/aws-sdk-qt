// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPATIBLEVERSIONSRESPONSE_P_H
#define QTAWS_GETCOMPATIBLEVERSIONSRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class GetCompatibleVersionsResponse;

class GetCompatibleVersionsResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit GetCompatibleVersionsResponsePrivate(GetCompatibleVersionsResponse * const q);

    void parseGetCompatibleVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCompatibleVersionsResponse)
    Q_DISABLE_COPY(GetCompatibleVersionsResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
