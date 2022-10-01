// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINAUTOTUNESREQUEST_H
#define QTAWS_DESCRIBEDOMAINAUTOTUNESREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeDomainAutoTunesRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeDomainAutoTunesRequest : public ElasticsearchRequest {

public:
    DescribeDomainAutoTunesRequest(const DescribeDomainAutoTunesRequest &other);
    DescribeDomainAutoTunesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainAutoTunesRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
