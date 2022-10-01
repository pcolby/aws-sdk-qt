// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSTOKENRESPONSE_P_H
#define QTAWS_GETACCESSTOKENRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class GetAccessTokenResponse;

class GetAccessTokenResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit GetAccessTokenResponsePrivate(GetAccessTokenResponse * const q);

    void parseGetAccessTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccessTokenResponse)
    Q_DISABLE_COPY(GetAccessTokenResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
