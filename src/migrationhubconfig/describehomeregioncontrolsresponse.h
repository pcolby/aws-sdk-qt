// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOMEREGIONCONTROLSRESPONSE_H
#define QTAWS_DESCRIBEHOMEREGIONCONTROLSRESPONSE_H

#include "migrationhubconfigresponse.h"
#include "describehomeregioncontrolsrequest.h"

namespace QtAws {
namespace MigrationHubConfig {

class DescribeHomeRegionControlsResponsePrivate;

class QTAWSMIGRATIONHUBCONFIG_EXPORT DescribeHomeRegionControlsResponse : public MigrationHubConfigResponse {
    Q_OBJECT

public:
    DescribeHomeRegionControlsResponse(const DescribeHomeRegionControlsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHomeRegionControlsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHomeRegionControlsResponse)
    Q_DISABLE_COPY(DescribeHomeRegionControlsResponse)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
