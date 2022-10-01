// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEELASTICSEARCHSERVICEROLERESPONSE_P_H
#define QTAWS_DELETEELASTICSEARCHSERVICEROLERESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteElasticsearchServiceRoleResponse;

class DeleteElasticsearchServiceRoleResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DeleteElasticsearchServiceRoleResponsePrivate(DeleteElasticsearchServiceRoleResponse * const q);

    void parseDeleteElasticsearchServiceRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteElasticsearchServiceRoleResponse)
    Q_DISABLE_COPY(DeleteElasticsearchServiceRoleResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
