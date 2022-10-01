// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHRESPONSE_P_H
#define QTAWS_SEARCHRESPONSE_P_H

#include "cloudsearchdomainresponse_p.h"

namespace QtAws {
namespace CloudSearchDomain {

class SearchResponse;

class SearchResponsePrivate : public CloudSearchDomainResponsePrivate {

public:

    explicit SearchResponsePrivate(SearchResponse * const q);

    void parseSearchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchResponse)
    Q_DISABLE_COPY(SearchResponsePrivate)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
