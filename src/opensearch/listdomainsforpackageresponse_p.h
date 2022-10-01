// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSFORPACKAGERESPONSE_P_H
#define QTAWS_LISTDOMAINSFORPACKAGERESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class ListDomainsForPackageResponse;

class ListDomainsForPackageResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit ListDomainsForPackageResponsePrivate(ListDomainsForPackageResponse * const q);

    void parseListDomainsForPackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDomainsForPackageResponse)
    Q_DISABLE_COPY(ListDomainsForPackageResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
