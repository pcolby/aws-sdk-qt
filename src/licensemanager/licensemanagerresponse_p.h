// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LICENSEMANAGERRESPONSE_P_H
#define QTAWS_LICENSEMANAGERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class LicenseManagerResponse;

class LicenseManagerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LicenseManagerResponsePrivate(LicenseManagerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LicenseManagerResponse)
    Q_DISABLE_COPY(LicenseManagerResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
