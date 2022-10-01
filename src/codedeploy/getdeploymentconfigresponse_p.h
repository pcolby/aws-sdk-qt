// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTCONFIGRESPONSE_P_H
#define QTAWS_GETDEPLOYMENTCONFIGRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentConfigResponse;

class GetDeploymentConfigResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit GetDeploymentConfigResponsePrivate(GetDeploymentConfigResponse * const q);

    void parseGetDeploymentConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeploymentConfigResponse)
    Q_DISABLE_COPY(GetDeploymentConfigResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
