// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYCLUSTERRESPONSE_H
#define QTAWS_ROUTE53RECOVERYCLUSTERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsroute53recoveryclusterglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class Route53RecoveryClusterResponsePrivate;

class QTAWSROUTE53RECOVERYCLUSTER_EXPORT Route53RecoveryClusterResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    Route53RecoveryClusterResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    Route53RecoveryClusterResponse(Route53RecoveryClusterResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53RecoveryClusterResponse)
    Q_DISABLE_COPY(Route53RecoveryClusterResponse)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
