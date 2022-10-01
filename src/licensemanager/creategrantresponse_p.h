// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRANTRESPONSE_P_H
#define QTAWS_CREATEGRANTRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class CreateGrantResponse;

class CreateGrantResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit CreateGrantResponsePrivate(CreateGrantResponse * const q);

    void parseCreateGrantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGrantResponse)
    Q_DISABLE_COPY(CreateGrantResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
