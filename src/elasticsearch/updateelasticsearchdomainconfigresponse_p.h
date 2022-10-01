// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEELASTICSEARCHDOMAINCONFIGRESPONSE_P_H
#define QTAWS_UPDATEELASTICSEARCHDOMAINCONFIGRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class UpdateElasticsearchDomainConfigResponse;

class UpdateElasticsearchDomainConfigResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit UpdateElasticsearchDomainConfigResponsePrivate(UpdateElasticsearchDomainConfigResponse * const q);

    void parseUpdateElasticsearchDomainConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateElasticsearchDomainConfigResponse)
    Q_DISABLE_COPY(UpdateElasticsearchDomainConfigResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
