// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGARTIFACTRESPONSE_H
#define QTAWS_DESCRIBEPROVISIONINGARTIFACTRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisioningArtifactResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeProvisioningArtifactResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeProvisioningArtifactResponse(const DescribeProvisioningArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProvisioningArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProvisioningArtifactResponse)
    Q_DISABLE_COPY(DescribeProvisioningArtifactResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
