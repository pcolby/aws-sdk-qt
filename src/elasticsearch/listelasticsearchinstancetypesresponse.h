// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTELASTICSEARCHINSTANCETYPESRESPONSE_H
#define QTAWS_LISTELASTICSEARCHINSTANCETYPESRESPONSE_H

#include "elasticsearchresponse.h"
#include "listelasticsearchinstancetypesrequest.h"

namespace QtAws {
namespace Elasticsearch {

class ListElasticsearchInstanceTypesResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT ListElasticsearchInstanceTypesResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    ListElasticsearchInstanceTypesResponse(const ListElasticsearchInstanceTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListElasticsearchInstanceTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListElasticsearchInstanceTypesResponse)
    Q_DISABLE_COPY(ListElasticsearchInstanceTypesResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
