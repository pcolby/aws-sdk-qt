/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
