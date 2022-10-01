// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBULKDEPLOYMENTRESPONSE_P_H
#define QTAWS_STOPBULKDEPLOYMENTRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class StopBulkDeploymentResponse;

class StopBulkDeploymentResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit StopBulkDeploymentResponsePrivate(StopBulkDeploymentResponse * const q);

    void parseStopBulkDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopBulkDeploymentResponse)
    Q_DISABLE_COPY(StopBulkDeploymentResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
