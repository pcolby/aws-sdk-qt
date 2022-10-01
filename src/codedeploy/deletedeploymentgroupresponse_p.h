// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTGROUPRESPONSE_P_H
#define QTAWS_DELETEDEPLOYMENTGROUPRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteDeploymentGroupResponse;

class DeleteDeploymentGroupResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit DeleteDeploymentGroupResponsePrivate(DeleteDeploymentGroupResponse * const q);

    void parseDeleteDeploymentGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeploymentGroupResponse)
    Q_DISABLE_COPY(DeleteDeploymentGroupResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
