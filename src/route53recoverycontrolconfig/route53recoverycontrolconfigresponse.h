// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYCONTROLCONFIGRESPONSE_H
#define QTAWS_ROUTE53RECOVERYCONTROLCONFIGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsroute53recoverycontrolconfigglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class Route53RecoveryControlConfigResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT Route53RecoveryControlConfigResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    Route53RecoveryControlConfigResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    Route53RecoveryControlConfigResponse(Route53RecoveryControlConfigResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53RecoveryControlConfigResponse)
    Q_DISABLE_COPY(Route53RecoveryControlConfigResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
