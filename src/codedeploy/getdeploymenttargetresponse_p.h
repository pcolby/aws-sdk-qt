// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTTARGETRESPONSE_P_H
#define QTAWS_GETDEPLOYMENTTARGETRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentTargetResponse;

class GetDeploymentTargetResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit GetDeploymentTargetResponsePrivate(GetDeploymentTargetResponse * const q);

    void parseGetDeploymentTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeploymentTargetResponse)
    Q_DISABLE_COPY(GetDeploymentTargetResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
