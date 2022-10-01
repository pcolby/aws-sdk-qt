// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELELASTICSEARCHSERVICESOFTWAREUPDATERESPONSE_H
#define QTAWS_CANCELELASTICSEARCHSERVICESOFTWAREUPDATERESPONSE_H

#include "elasticsearchresponse.h"
#include "cancelelasticsearchservicesoftwareupdaterequest.h"

namespace QtAws {
namespace Elasticsearch {

class CancelElasticsearchServiceSoftwareUpdateResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT CancelElasticsearchServiceSoftwareUpdateResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    CancelElasticsearchServiceSoftwareUpdateResponse(const CancelElasticsearchServiceSoftwareUpdateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelElasticsearchServiceSoftwareUpdateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelElasticsearchServiceSoftwareUpdateResponse)
    Q_DISABLE_COPY(CancelElasticsearchServiceSoftwareUpdateResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
