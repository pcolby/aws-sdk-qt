// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSTATUSRESPONSE_P_H
#define QTAWS_GETDEPLOYMENTSTATUSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetDeploymentStatusResponse;

class GetDeploymentStatusResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetDeploymentStatusResponsePrivate(GetDeploymentStatusResponse * const q);

    void parseGetDeploymentStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeploymentStatusResponse)
    Q_DISABLE_COPY(GetDeploymentStatusResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
