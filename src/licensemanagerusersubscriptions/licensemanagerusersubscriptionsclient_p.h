// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSCLIENT_P_H
#define QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class LicenseManagerUserSubscriptionsClient;

class LicenseManagerUserSubscriptionsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LicenseManagerUserSubscriptionsClientPrivate(LicenseManagerUserSubscriptionsClient * const q);

private:
    Q_DECLARE_PUBLIC(LicenseManagerUserSubscriptionsClient)
    Q_DISABLE_COPY(LicenseManagerUserSubscriptionsClientPrivate)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
