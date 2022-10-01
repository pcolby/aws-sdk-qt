// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICACHERESPONSE_H
#define QTAWS_ELASTICACHERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawselasticacheglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ElastiCache {

class ElastiCacheResponsePrivate;

class QTAWSELASTICACHE_EXPORT ElastiCacheResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ElastiCacheResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ElastiCacheResponse(ElastiCacheResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElastiCacheResponse)
    Q_DISABLE_COPY(ElastiCacheResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
