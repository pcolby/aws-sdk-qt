// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPUPDATEACTIONRESPONSE_P_H
#define QTAWS_BATCHSTOPUPDATEACTIONRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class BatchStopUpdateActionResponse;

class BatchStopUpdateActionResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit BatchStopUpdateActionResponsePrivate(BatchStopUpdateActionResponse * const q);

    void parseBatchStopUpdateActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchStopUpdateActionResponse)
    Q_DISABLE_COPY(BatchStopUpdateActionResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
