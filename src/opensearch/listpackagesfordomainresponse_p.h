// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGESFORDOMAINRESPONSE_P_H
#define QTAWS_LISTPACKAGESFORDOMAINRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class ListPackagesForDomainResponse;

class ListPackagesForDomainResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit ListPackagesForDomainResponsePrivate(ListPackagesForDomainResponse * const q);

    void parseListPackagesForDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPackagesForDomainResponse)
    Q_DISABLE_COPY(ListPackagesForDomainResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
