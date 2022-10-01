// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINAUTOTUNESRESPONSE_P_H
#define QTAWS_DESCRIBEDOMAINAUTOTUNESRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeDomainAutoTunesResponse;

class DescribeDomainAutoTunesResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DescribeDomainAutoTunesResponsePrivate(DescribeDomainAutoTunesResponse * const q);

    void parseDescribeDomainAutoTunesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDomainAutoTunesResponse)
    Q_DISABLE_COPY(DescribeDomainAutoTunesResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
