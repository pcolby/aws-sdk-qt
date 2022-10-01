// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTGROUPSRESPONSE_P_H
#define QTAWS_LISTDEPLOYMENTGROUPSRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentGroupsResponse;

class ListDeploymentGroupsResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit ListDeploymentGroupsResponsePrivate(ListDeploymentGroupsResponse * const q);

    void parseListDeploymentGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeploymentGroupsResponse)
    Q_DISABLE_COPY(ListDeploymentGroupsResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
