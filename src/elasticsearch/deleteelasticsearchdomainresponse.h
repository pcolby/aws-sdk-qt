// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEELASTICSEARCHDOMAINRESPONSE_H
#define QTAWS_DELETEELASTICSEARCHDOMAINRESPONSE_H

#include "elasticsearchresponse.h"
#include "deleteelasticsearchdomainrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteElasticsearchDomainResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DeleteElasticsearchDomainResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DeleteElasticsearchDomainResponse(const DeleteElasticsearchDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteElasticsearchDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteElasticsearchDomainResponse)
    Q_DISABLE_COPY(DeleteElasticsearchDomainResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
