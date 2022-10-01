// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELELASTICSEARCHSERVICESOFTWAREUPDATERESPONSE_P_H
#define QTAWS_CANCELELASTICSEARCHSERVICESOFTWAREUPDATERESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class CancelElasticsearchServiceSoftwareUpdateResponse;

class CancelElasticsearchServiceSoftwareUpdateResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit CancelElasticsearchServiceSoftwareUpdateResponsePrivate(CancelElasticsearchServiceSoftwareUpdateResponse * const q);

    void parseCancelElasticsearchServiceSoftwareUpdateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelElasticsearchServiceSoftwareUpdateResponse)
    Q_DISABLE_COPY(CancelElasticsearchServiceSoftwareUpdateResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
