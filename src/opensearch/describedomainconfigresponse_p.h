// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONFIGRESPONSE_P_H
#define QTAWS_DESCRIBEDOMAINCONFIGRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainConfigResponse;

class DescribeDomainConfigResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DescribeDomainConfigResponsePrivate(DescribeDomainConfigResponse * const q);

    void parseDescribeDomainConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDomainConfigResponse)
    Q_DISABLE_COPY(DescribeDomainConfigResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
