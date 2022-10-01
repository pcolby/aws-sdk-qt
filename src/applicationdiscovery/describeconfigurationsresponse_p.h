// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGURATIONSRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeConfigurationsResponse;

class DescribeConfigurationsResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit DescribeConfigurationsResponsePrivate(DescribeConfigurationsResponse * const q);

    void parseDescribeConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationsResponse)
    Q_DISABLE_COPY(DescribeConfigurationsResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
