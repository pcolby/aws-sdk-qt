// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGRANTRESPONSE_P_H
#define QTAWS_GETGRANTRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class GetGrantResponse;

class GetGrantResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit GetGrantResponsePrivate(GetGrantResponse * const q);

    void parseGetGrantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGrantResponse)
    Q_DISABLE_COPY(GetGrantResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
