// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSACCESSSCOPERESPONSE_P_H
#define QTAWS_DELETENETWORKINSIGHTSACCESSSCOPERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAccessScopeResponse;

class DeleteNetworkInsightsAccessScopeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteNetworkInsightsAccessScopeResponsePrivate(DeleteNetworkInsightsAccessScopeResponse * const q);

    void parseDeleteNetworkInsightsAccessScopeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInsightsAccessScopeResponse)
    Q_DISABLE_COPY(DeleteNetworkInsightsAccessScopeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
