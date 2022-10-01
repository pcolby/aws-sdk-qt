// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTCONFIGURATIONSRESPONSE_H
#define QTAWS_DESCRIBEEXPORTCONFIGURATIONSRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "describeexportconfigurationsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeExportConfigurationsResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DescribeExportConfigurationsResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    DescribeExportConfigurationsResponse(const DescribeExportConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeExportConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExportConfigurationsResponse)
    Q_DISABLE_COPY(DescribeExportConfigurationsResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
