// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISSOCIATEPACKAGERESPONSE_H
#define QTAWS_DISSOCIATEPACKAGERESPONSE_H

#include "elasticsearchresponse.h"
#include "dissociatepackagerequest.h"

namespace QtAws {
namespace Elasticsearch {

class DissociatePackageResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DissociatePackageResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DissociatePackageResponse(const DissociatePackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DissociatePackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DissociatePackageResponse)
    Q_DISABLE_COPY(DissociatePackageResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
