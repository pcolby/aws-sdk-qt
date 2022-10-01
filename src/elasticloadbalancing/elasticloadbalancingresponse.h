// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICLOADBALANCINGRESPONSE_H
#define QTAWS_ELASTICLOADBALANCINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawselasticloadbalancingglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ElasticLoadBalancingResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT ElasticLoadBalancingResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ElasticLoadBalancingResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ElasticLoadBalancingResponse(ElasticLoadBalancingResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticLoadBalancingResponse)
    Q_DISABLE_COPY(ElasticLoadBalancingResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
