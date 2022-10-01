// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDEPLOYMENTSRESPONSE_P_H
#define QTAWS_RESETDEPLOYMENTSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ResetDeploymentsResponse;

class ResetDeploymentsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ResetDeploymentsResponsePrivate(ResetDeploymentsResponse * const q);

    void parseResetDeploymentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetDeploymentsResponse)
    Q_DISABLE_COPY(ResetDeploymentsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
