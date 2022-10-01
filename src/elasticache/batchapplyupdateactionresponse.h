// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHAPPLYUPDATEACTIONRESPONSE_H
#define QTAWS_BATCHAPPLYUPDATEACTIONRESPONSE_H

#include "elasticacheresponse.h"
#include "batchapplyupdateactionrequest.h"

namespace QtAws {
namespace ElastiCache {

class BatchApplyUpdateActionResponsePrivate;

class QTAWSELASTICACHE_EXPORT BatchApplyUpdateActionResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    BatchApplyUpdateActionResponse(const BatchApplyUpdateActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchApplyUpdateActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchApplyUpdateActionResponse)
    Q_DISABLE_COPY(BatchApplyUpdateActionResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
