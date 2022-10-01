// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTRESPONSE_P_H
#define QTAWS_GETDEPLOYMENTRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentResponse;

class GetDeploymentResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit GetDeploymentResponsePrivate(GetDeploymentResponse * const q);

    void parseGetDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeploymentResponse)
    Q_DISABLE_COPY(GetDeploymentResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
