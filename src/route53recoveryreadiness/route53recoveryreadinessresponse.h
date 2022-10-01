// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYREADINESSRESPONSE_H
#define QTAWS_ROUTE53RECOVERYREADINESSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsroute53recoveryreadinessglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class Route53RecoveryReadinessResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT Route53RecoveryReadinessResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    Route53RecoveryReadinessResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    Route53RecoveryReadinessResponse(Route53RecoveryReadinessResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53RecoveryReadinessResponse)
    Q_DISABLE_COPY(Route53RecoveryReadinessResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
