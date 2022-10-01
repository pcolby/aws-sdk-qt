// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTELASTICSEARCHSERVICESOFTWAREUPDATEREQUEST_H
#define QTAWS_STARTELASTICSEARCHSERVICESOFTWAREUPDATEREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class StartElasticsearchServiceSoftwareUpdateRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT StartElasticsearchServiceSoftwareUpdateRequest : public ElasticsearchRequest {

public:
    StartElasticsearchServiceSoftwareUpdateRequest(const StartElasticsearchServiceSoftwareUpdateRequest &other);
    StartElasticsearchServiceSoftwareUpdateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartElasticsearchServiceSoftwareUpdateRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
