// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTELASTICSEARCHSERVICESOFTWAREUPDATERESPONSE_P_H
#define QTAWS_STARTELASTICSEARCHSERVICESOFTWAREUPDATERESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class StartElasticsearchServiceSoftwareUpdateResponse;

class StartElasticsearchServiceSoftwareUpdateResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit StartElasticsearchServiceSoftwareUpdateResponsePrivate(StartElasticsearchServiceSoftwareUpdateResponse * const q);

    void parseStartElasticsearchServiceSoftwareUpdateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartElasticsearchServiceSoftwareUpdateResponse)
    Q_DISABLE_COPY(StartElasticsearchServiceSoftwareUpdateResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
