// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTCONFIGURATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEEXPORTCONFIGURATIONSRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeExportConfigurationsResponse;

class DescribeExportConfigurationsResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit DescribeExportConfigurationsResponsePrivate(DescribeExportConfigurationsResponse * const q);

    void parseDescribeExportConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExportConfigurationsResponse)
    Q_DISABLE_COPY(DescribeExportConfigurationsResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
