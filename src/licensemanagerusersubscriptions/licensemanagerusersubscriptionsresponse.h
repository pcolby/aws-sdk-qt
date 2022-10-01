// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSRESPONSE_H
#define QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslicensemanagerusersubscriptionsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class LicenseManagerUserSubscriptionsResponsePrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT LicenseManagerUserSubscriptionsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LicenseManagerUserSubscriptionsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LicenseManagerUserSubscriptionsResponse(LicenseManagerUserSubscriptionsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LicenseManagerUserSubscriptionsResponse)
    Q_DISABLE_COPY(LicenseManagerUserSubscriptionsResponse)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
