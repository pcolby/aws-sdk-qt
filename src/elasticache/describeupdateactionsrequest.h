// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPDATEACTIONSREQUEST_H
#define QTAWS_DESCRIBEUPDATEACTIONSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeUpdateActionsRequestPrivate;

class QTAWSELASTICACHE_EXPORT DescribeUpdateActionsRequest : public ElastiCacheRequest {

public:
    DescribeUpdateActionsRequest(const DescribeUpdateActionsRequest &other);
    DescribeUpdateActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUpdateActionsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
