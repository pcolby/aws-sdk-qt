// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBULKDEPLOYMENTSTATUSRESPONSE_P_H
#define QTAWS_GETBULKDEPLOYMENTSTATUSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetBulkDeploymentStatusResponse;

class GetBulkDeploymentStatusResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetBulkDeploymentStatusResponsePrivate(GetBulkDeploymentStatusResponse * const q);

    void parseGetBulkDeploymentStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBulkDeploymentStatusResponse)
    Q_DISABLE_COPY(GetBulkDeploymentStatusResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
