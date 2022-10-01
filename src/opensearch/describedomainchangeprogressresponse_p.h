// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCHANGEPROGRESSRESPONSE_P_H
#define QTAWS_DESCRIBEDOMAINCHANGEPROGRESSRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainChangeProgressResponse;

class DescribeDomainChangeProgressResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DescribeDomainChangeProgressResponsePrivate(DescribeDomainChangeProgressResponse * const q);

    void parseDescribeDomainChangeProgressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDomainChangeProgressResponse)
    Q_DISABLE_COPY(DescribeDomainChangeProgressResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
