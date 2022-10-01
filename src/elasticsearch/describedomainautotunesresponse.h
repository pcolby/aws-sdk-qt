// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINAUTOTUNESRESPONSE_H
#define QTAWS_DESCRIBEDOMAINAUTOTUNESRESPONSE_H

#include "elasticsearchresponse.h"
#include "describedomainautotunesrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeDomainAutoTunesResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeDomainAutoTunesResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DescribeDomainAutoTunesResponse(const DescribeDomainAutoTunesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDomainAutoTunesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainAutoTunesResponse)
    Q_DISABLE_COPY(DescribeDomainAutoTunesResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
