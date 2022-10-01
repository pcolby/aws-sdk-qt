// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICLOADBALANCINGV2RESPONSE_H
#define QTAWS_ELASTICLOADBALANCINGV2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawselasticloadbalancingv2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ElasticLoadBalancingv2ResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ElasticLoadBalancingv2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ElasticLoadBalancingv2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    ElasticLoadBalancingv2Response(ElasticLoadBalancingv2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticLoadBalancingv2Response)
    Q_DISABLE_COPY(ElasticLoadBalancingv2Response)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
