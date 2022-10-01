// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEELASTICSEARCHSERVICEROLERESPONSE_H
#define QTAWS_DELETEELASTICSEARCHSERVICEROLERESPONSE_H

#include "elasticsearchresponse.h"
#include "deleteelasticsearchservicerolerequest.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteElasticsearchServiceRoleResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DeleteElasticsearchServiceRoleResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DeleteElasticsearchServiceRoleResponse(const DeleteElasticsearchServiceRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteElasticsearchServiceRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteElasticsearchServiceRoleResponse)
    Q_DISABLE_COPY(DeleteElasticsearchServiceRoleResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
