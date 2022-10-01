// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIVEDLICENSESRESPONSE_P_H
#define QTAWS_LISTRECEIVEDLICENSESRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListReceivedLicensesResponse;

class ListReceivedLicensesResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListReceivedLicensesResponsePrivate(ListReceivedLicensesResponse * const q);

    void parseListReceivedLicensesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReceivedLicensesResponse)
    Q_DISABLE_COPY(ListReceivedLicensesResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
