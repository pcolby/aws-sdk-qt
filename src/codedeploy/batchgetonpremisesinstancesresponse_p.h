// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETONPREMISESINSTANCESRESPONSE_P_H
#define QTAWS_BATCHGETONPREMISESINSTANCESRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetOnPremisesInstancesResponse;

class BatchGetOnPremisesInstancesResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit BatchGetOnPremisesInstancesResponsePrivate(BatchGetOnPremisesInstancesResponse * const q);

    void parseBatchGetOnPremisesInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetOnPremisesInstancesResponse)
    Q_DISABLE_COPY(BatchGetOnPremisesInstancesResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
