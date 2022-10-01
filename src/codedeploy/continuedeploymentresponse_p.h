// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTINUEDEPLOYMENTRESPONSE_P_H
#define QTAWS_CONTINUEDEPLOYMENTRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class ContinueDeploymentResponse;

class ContinueDeploymentResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit ContinueDeploymentResponsePrivate(ContinueDeploymentResponse * const q);

    void parseContinueDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ContinueDeploymentResponse)
    Q_DISABLE_COPY(ContinueDeploymentResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
