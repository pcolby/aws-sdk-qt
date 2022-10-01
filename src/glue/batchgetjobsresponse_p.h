// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETJOBSRESPONSE_P_H
#define QTAWS_BATCHGETJOBSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchGetJobsResponse;

class BatchGetJobsResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchGetJobsResponsePrivate(BatchGetJobsResponse * const q);

    void parseBatchGetJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetJobsResponse)
    Q_DISABLE_COPY(BatchGetJobsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
