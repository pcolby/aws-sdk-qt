// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEDEFAULTPARAMETERSREQUEST_H
#define QTAWS_DESCRIBEENGINEDEFAULTPARAMETERSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeEngineDefaultParametersRequestPrivate;

class QTAWSELASTICACHE_EXPORT DescribeEngineDefaultParametersRequest : public ElastiCacheRequest {

public:
    DescribeEngineDefaultParametersRequest(const DescribeEngineDefaultParametersRequest &other);
    DescribeEngineDefaultParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEngineDefaultParametersRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
