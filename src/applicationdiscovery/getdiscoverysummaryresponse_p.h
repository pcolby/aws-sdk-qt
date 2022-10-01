// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVERYSUMMARYRESPONSE_P_H
#define QTAWS_GETDISCOVERYSUMMARYRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class GetDiscoverySummaryResponse;

class GetDiscoverySummaryResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit GetDiscoverySummaryResponsePrivate(GetDiscoverySummaryResponse * const q);

    void parseGetDiscoverySummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDiscoverySummaryResponse)
    Q_DISABLE_COPY(GetDiscoverySummaryResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
