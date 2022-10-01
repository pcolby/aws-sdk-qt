// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPJOBRUNRESPONSE_P_H
#define QTAWS_BATCHSTOPJOBRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchStopJobRunResponse;

class BatchStopJobRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchStopJobRunResponsePrivate(BatchStopJobRunResponse * const q);

    void parseBatchStopJobRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchStopJobRunResponse)
    Q_DISABLE_COPY(BatchStopJobRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
