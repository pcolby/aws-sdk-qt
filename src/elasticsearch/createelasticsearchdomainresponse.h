// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEELASTICSEARCHDOMAINRESPONSE_H
#define QTAWS_CREATEELASTICSEARCHDOMAINRESPONSE_H

#include "elasticsearchresponse.h"
#include "createelasticsearchdomainrequest.h"

namespace QtAws {
namespace Elasticsearch {

class CreateElasticsearchDomainResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT CreateElasticsearchDomainResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    CreateElasticsearchDomainResponse(const CreateElasticsearchDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateElasticsearchDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateElasticsearchDomainResponse)
    Q_DISABLE_COPY(CreateElasticsearchDomainResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
