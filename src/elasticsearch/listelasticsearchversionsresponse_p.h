// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTELASTICSEARCHVERSIONSRESPONSE_P_H
#define QTAWS_LISTELASTICSEARCHVERSIONSRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class ListElasticsearchVersionsResponse;

class ListElasticsearchVersionsResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit ListElasticsearchVersionsResponsePrivate(ListElasticsearchVersionsResponse * const q);

    void parseListElasticsearchVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListElasticsearchVersionsResponse)
    Q_DISABLE_COPY(ListElasticsearchVersionsResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
