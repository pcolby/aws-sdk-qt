// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINSIGHTSACCESSSCOPERESPONSE_P_H
#define QTAWS_CREATENETWORKINSIGHTSACCESSSCOPERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInsightsAccessScopeResponse;

class CreateNetworkInsightsAccessScopeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateNetworkInsightsAccessScopeResponsePrivate(CreateNetworkInsightsAccessScopeResponse * const q);

    void parseCreateNetworkInsightsAccessScopeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNetworkInsightsAccessScopeResponse)
    Q_DISABLE_COPY(CreateNetworkInsightsAccessScopeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
