// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTCONFIGRESPONSE_P_H
#define QTAWS_DELETEDEPLOYMENTCONFIGRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteDeploymentConfigResponse;

class DeleteDeploymentConfigResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit DeleteDeploymentConfigResponsePrivate(DeleteDeploymentConfigResponse * const q);

    void parseDeleteDeploymentConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeploymentConfigResponse)
    Q_DISABLE_COPY(DeleteDeploymentConfigResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
