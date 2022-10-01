// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTGROUPRESPONSE_P_H
#define QTAWS_GETDEPLOYMENTGROUPRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentGroupResponse;

class GetDeploymentGroupResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit GetDeploymentGroupResponsePrivate(GetDeploymentGroupResponse * const q);

    void parseGetDeploymentGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeploymentGroupResponse)
    Q_DISABLE_COPY(GetDeploymentGroupResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
