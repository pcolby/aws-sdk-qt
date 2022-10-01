// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSRESPONSE_P_H
#define QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class LicenseManagerUserSubscriptionsResponse;

class LicenseManagerUserSubscriptionsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LicenseManagerUserSubscriptionsResponsePrivate(LicenseManagerUserSubscriptionsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LicenseManagerUserSubscriptionsResponse)
    Q_DISABLE_COPY(LicenseManagerUserSubscriptionsResponsePrivate)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
