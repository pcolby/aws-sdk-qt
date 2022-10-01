// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTGROUPRESPONSE_P_H
#define QTAWS_UPDATEDEPLOYMENTGROUPRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class UpdateDeploymentGroupResponse;

class UpdateDeploymentGroupResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit UpdateDeploymentGroupResponsePrivate(UpdateDeploymentGroupResponse * const q);

    void parseUpdateDeploymentGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeploymentGroupResponse)
    Q_DISABLE_COPY(UpdateDeploymentGroupResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
