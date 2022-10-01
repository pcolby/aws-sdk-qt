// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETAPPLICATIONSRESPONSE_P_H
#define QTAWS_BATCHGETAPPLICATIONSRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetApplicationsResponse;

class BatchGetApplicationsResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit BatchGetApplicationsResponsePrivate(BatchGetApplicationsResponse * const q);

    void parseBatchGetApplicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetApplicationsResponse)
    Q_DISABLE_COPY(BatchGetApplicationsResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
