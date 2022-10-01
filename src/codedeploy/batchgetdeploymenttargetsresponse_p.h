// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTTARGETSRESPONSE_P_H
#define QTAWS_BATCHGETDEPLOYMENTTARGETSRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentTargetsResponse;

class BatchGetDeploymentTargetsResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit BatchGetDeploymentTargetsResponsePrivate(BatchGetDeploymentTargetsResponse * const q);

    void parseBatchGetDeploymentTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetDeploymentTargetsResponse)
    Q_DISABLE_COPY(BatchGetDeploymentTargetsResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
