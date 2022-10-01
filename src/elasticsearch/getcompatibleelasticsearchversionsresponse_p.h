// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPATIBLEELASTICSEARCHVERSIONSRESPONSE_P_H
#define QTAWS_GETCOMPATIBLEELASTICSEARCHVERSIONSRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class GetCompatibleElasticsearchVersionsResponse;

class GetCompatibleElasticsearchVersionsResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit GetCompatibleElasticsearchVersionsResponsePrivate(GetCompatibleElasticsearchVersionsResponse * const q);

    void parseGetCompatibleElasticsearchVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCompatibleElasticsearchVersionsResponse)
    Q_DISABLE_COPY(GetCompatibleElasticsearchVersionsResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
