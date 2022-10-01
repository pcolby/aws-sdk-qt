// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGESFORDOMAINRESPONSE_H
#define QTAWS_LISTPACKAGESFORDOMAINRESPONSE_H

#include "elasticsearchresponse.h"
#include "listpackagesfordomainrequest.h"

namespace QtAws {
namespace Elasticsearch {

class ListPackagesForDomainResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT ListPackagesForDomainResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    ListPackagesForDomainResponse(const ListPackagesForDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPackagesForDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackagesForDomainResponse)
    Q_DISABLE_COPY(ListPackagesForDomainResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
