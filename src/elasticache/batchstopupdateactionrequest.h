// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPUPDATEACTIONREQUEST_H
#define QTAWS_BATCHSTOPUPDATEACTIONREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class BatchStopUpdateActionRequestPrivate;

class QTAWSELASTICACHE_EXPORT BatchStopUpdateActionRequest : public ElastiCacheRequest {

public:
    BatchStopUpdateActionRequest(const BatchStopUpdateActionRequest &other);
    BatchStopUpdateActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchStopUpdateActionRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
