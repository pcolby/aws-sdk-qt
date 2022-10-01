// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPUPDATEACTIONRESPONSE_H
#define QTAWS_BATCHSTOPUPDATEACTIONRESPONSE_H

#include "elasticacheresponse.h"
#include "batchstopupdateactionrequest.h"

namespace QtAws {
namespace ElastiCache {

class BatchStopUpdateActionResponsePrivate;

class QTAWSELASTICACHE_EXPORT BatchStopUpdateActionResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    BatchStopUpdateActionResponse(const BatchStopUpdateActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchStopUpdateActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchStopUpdateActionResponse)
    Q_DISABLE_COPY(BatchStopUpdateActionResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
