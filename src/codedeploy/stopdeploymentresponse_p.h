// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDEPLOYMENTRESPONSE_P_H
#define QTAWS_STOPDEPLOYMENTRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class StopDeploymentResponse;

class StopDeploymentResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit StopDeploymentResponsePrivate(StopDeploymentResponse * const q);

    void parseStopDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopDeploymentResponse)
    Q_DISABLE_COPY(StopDeploymentResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
