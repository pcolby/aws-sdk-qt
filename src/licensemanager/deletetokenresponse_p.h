// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOKENRESPONSE_P_H
#define QTAWS_DELETETOKENRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class DeleteTokenResponse;

class DeleteTokenResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit DeleteTokenResponsePrivate(DeleteTokenResponse * const q);

    void parseDeleteTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTokenResponse)
    Q_DISABLE_COPY(DeleteTokenResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
