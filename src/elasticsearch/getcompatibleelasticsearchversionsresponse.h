// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPATIBLEELASTICSEARCHVERSIONSRESPONSE_H
#define QTAWS_GETCOMPATIBLEELASTICSEARCHVERSIONSRESPONSE_H

#include "elasticsearchresponse.h"
#include "getcompatibleelasticsearchversionsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class GetCompatibleElasticsearchVersionsResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT GetCompatibleElasticsearchVersionsResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    GetCompatibleElasticsearchVersionsResponse(const GetCompatibleElasticsearchVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCompatibleElasticsearchVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCompatibleElasticsearchVersionsResponse)
    Q_DISABLE_COPY(GetCompatibleElasticsearchVersionsResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
