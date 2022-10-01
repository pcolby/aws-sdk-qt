// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORPROFILESRESPONSE_P_H
#define QTAWS_DESCRIBECONNECTORPROFILESRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorProfilesResponse;

class DescribeConnectorProfilesResponsePrivate : public AppflowResponsePrivate {

public:

    explicit DescribeConnectorProfilesResponsePrivate(DescribeConnectorProfilesResponse * const q);

    void parseDescribeConnectorProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConnectorProfilesResponse)
    Q_DISABLE_COPY(DescribeConnectorProfilesResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
