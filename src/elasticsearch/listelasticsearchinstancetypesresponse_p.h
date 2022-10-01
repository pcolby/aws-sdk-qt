// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTELASTICSEARCHINSTANCETYPESRESPONSE_P_H
#define QTAWS_LISTELASTICSEARCHINSTANCETYPESRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class ListElasticsearchInstanceTypesResponse;

class ListElasticsearchInstanceTypesResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit ListElasticsearchInstanceTypesResponsePrivate(ListElasticsearchInstanceTypesResponse * const q);

    void parseListElasticsearchInstanceTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListElasticsearchInstanceTypesResponse)
    Q_DISABLE_COPY(ListElasticsearchInstanceTypesResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
