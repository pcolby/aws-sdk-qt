// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRANTVERSIONRESPONSE_P_H
#define QTAWS_CREATEGRANTVERSIONRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class CreateGrantVersionResponse;

class CreateGrantVersionResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit CreateGrantVersionResponsePrivate(CreateGrantVersionResponse * const q);

    void parseCreateGrantVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGrantVersionResponse)
    Q_DISABLE_COPY(CreateGrantVersionResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
