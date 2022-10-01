// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPDATEACTIONSRESPONSE_H
#define QTAWS_DESCRIBEUPDATEACTIONSRESPONSE_H

#include "elasticacheresponse.h"
#include "describeupdateactionsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeUpdateActionsResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeUpdateActionsResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeUpdateActionsResponse(const DescribeUpdateActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUpdateActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUpdateActionsResponse)
    Q_DISABLE_COPY(DescribeUpdateActionsResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
