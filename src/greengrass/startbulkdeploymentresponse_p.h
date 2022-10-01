// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKDEPLOYMENTRESPONSE_P_H
#define QTAWS_STARTBULKDEPLOYMENTRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class StartBulkDeploymentResponse;

class StartBulkDeploymentResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit StartBulkDeploymentResponsePrivate(StartBulkDeploymentResponse * const q);

    void parseStartBulkDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartBulkDeploymentResponse)
    Q_DISABLE_COPY(StartBulkDeploymentResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
