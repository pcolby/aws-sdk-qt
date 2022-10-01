// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSECONVERSIONTASKSRESPONSE_P_H
#define QTAWS_LISTLICENSECONVERSIONTASKSRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseConversionTasksResponse;

class ListLicenseConversionTasksResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListLicenseConversionTasksResponsePrivate(ListLicenseConversionTasksResponse * const q);

    void parseListLicenseConversionTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLicenseConversionTasksResponse)
    Q_DISABLE_COPY(ListLicenseConversionTasksResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
