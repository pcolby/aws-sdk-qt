// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTINSTANCESRESPONSE_P_H
#define QTAWS_BATCHGETDEPLOYMENTINSTANCESRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentInstancesResponse;

class BatchGetDeploymentInstancesResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit BatchGetDeploymentInstancesResponsePrivate(BatchGetDeploymentInstancesResponse * const q);

    void parseBatchGetDeploymentInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetDeploymentInstancesResponse)
    Q_DISABLE_COPY(BatchGetDeploymentInstancesResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
