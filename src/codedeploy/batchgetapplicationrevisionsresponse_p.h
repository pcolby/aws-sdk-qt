// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETAPPLICATIONREVISIONSRESPONSE_P_H
#define QTAWS_BATCHGETAPPLICATIONREVISIONSRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetApplicationRevisionsResponse;

class BatchGetApplicationRevisionsResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit BatchGetApplicationRevisionsResponsePrivate(BatchGetApplicationRevisionsResponse * const q);

    void parseBatchGetApplicationRevisionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetApplicationRevisionsResponse)
    Q_DISABLE_COPY(BatchGetApplicationRevisionsResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
