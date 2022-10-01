// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSESRESPONSE_P_H
#define QTAWS_LISTLICENSESRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListLicensesResponse;

class ListLicensesResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListLicensesResponsePrivate(ListLicensesResponse * const q);

    void parseListLicensesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLicensesResponse)
    Q_DISABLE_COPY(ListLicensesResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
