// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTSRESPONSE_P_H
#define QTAWS_BATCHGETDEPLOYMENTSRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentsResponse;

class BatchGetDeploymentsResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit BatchGetDeploymentsResponsePrivate(BatchGetDeploymentsResponse * const q);

    void parseBatchGetDeploymentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetDeploymentsResponse)
    Q_DISABLE_COPY(BatchGetDeploymentsResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
