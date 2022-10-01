// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTGROUPSRESPONSE_P_H
#define QTAWS_BATCHGETDEPLOYMENTGROUPSRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentGroupsResponse;

class BatchGetDeploymentGroupsResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit BatchGetDeploymentGroupsResponsePrivate(BatchGetDeploymentGroupsResponse * const q);

    void parseBatchGetDeploymentGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetDeploymentGroupsResponse)
    Q_DISABLE_COPY(BatchGetDeploymentGroupsResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
