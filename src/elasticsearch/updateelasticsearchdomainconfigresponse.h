// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEELASTICSEARCHDOMAINCONFIGRESPONSE_H
#define QTAWS_UPDATEELASTICSEARCHDOMAINCONFIGRESPONSE_H

#include "elasticsearchresponse.h"
#include "updateelasticsearchdomainconfigrequest.h"

namespace QtAws {
namespace Elasticsearch {

class UpdateElasticsearchDomainConfigResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT UpdateElasticsearchDomainConfigResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    UpdateElasticsearchDomainConfigResponse(const UpdateElasticsearchDomainConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateElasticsearchDomainConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateElasticsearchDomainConfigResponse)
    Q_DISABLE_COPY(UpdateElasticsearchDomainConfigResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
