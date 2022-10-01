// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOMEREGIONCONTROLSRESPONSE_P_H
#define QTAWS_DESCRIBEHOMEREGIONCONTROLSRESPONSE_P_H

#include "migrationhubconfigresponse_p.h"

namespace QtAws {
namespace MigrationHubConfig {

class DescribeHomeRegionControlsResponse;

class DescribeHomeRegionControlsResponsePrivate : public MigrationHubConfigResponsePrivate {

public:

    explicit DescribeHomeRegionControlsResponsePrivate(DescribeHomeRegionControlsResponse * const q);

    void parseDescribeHomeRegionControlsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHomeRegionControlsResponse)
    Q_DISABLE_COPY(DescribeHomeRegionControlsResponsePrivate)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
