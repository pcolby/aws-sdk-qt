// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTCONFIGRESPONSE_P_H
#define QTAWS_CREATEDEPLOYMENTCONFIGRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class CreateDeploymentConfigResponse;

class CreateDeploymentConfigResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit CreateDeploymentConfigResponsePrivate(CreateDeploymentConfigResponse * const q);

    void parseCreateDeploymentConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentConfigResponse)
    Q_DISABLE_COPY(CreateDeploymentConfigResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
