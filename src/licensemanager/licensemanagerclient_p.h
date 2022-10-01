// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LICENSEMANAGERCLIENT_P_H
#define QTAWS_LICENSEMANAGERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace LicenseManager {

class LicenseManagerClient;

class LicenseManagerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LicenseManagerClientPrivate(LicenseManagerClient * const q);

private:
    Q_DECLARE_PUBLIC(LicenseManagerClient)
    Q_DISABLE_COPY(LicenseManagerClientPrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
