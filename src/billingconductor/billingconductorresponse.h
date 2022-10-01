// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BILLINGCONDUCTORRESPONSE_H
#define QTAWS_BILLINGCONDUCTORRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsbillingconductorglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace BillingConductor {

class BillingConductorResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT BillingConductorResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    BillingConductorResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    BillingConductorResponse(BillingConductorResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BillingConductorResponse)
    Q_DISABLE_COPY(BillingConductorResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
