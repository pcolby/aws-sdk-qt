// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTELASTICSEARCHSERVICESOFTWAREUPDATERESPONSE_H
#define QTAWS_STARTELASTICSEARCHSERVICESOFTWAREUPDATERESPONSE_H

#include "elasticsearchresponse.h"
#include "startelasticsearchservicesoftwareupdaterequest.h"

namespace QtAws {
namespace Elasticsearch {

class StartElasticsearchServiceSoftwareUpdateResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT StartElasticsearchServiceSoftwareUpdateResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    StartElasticsearchServiceSoftwareUpdateResponse(const StartElasticsearchServiceSoftwareUpdateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartElasticsearchServiceSoftwareUpdateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartElasticsearchServiceSoftwareUpdateResponse)
    Q_DISABLE_COPY(StartElasticsearchServiceSoftwareUpdateResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
