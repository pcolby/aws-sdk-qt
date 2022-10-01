// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTELASTICSEARCHVERSIONSRESPONSE_H
#define QTAWS_LISTELASTICSEARCHVERSIONSRESPONSE_H

#include "elasticsearchresponse.h"
#include "listelasticsearchversionsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class ListElasticsearchVersionsResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT ListElasticsearchVersionsResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    ListElasticsearchVersionsResponse(const ListElasticsearchVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListElasticsearchVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListElasticsearchVersionsResponse)
    Q_DISABLE_COPY(ListElasticsearchVersionsResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
