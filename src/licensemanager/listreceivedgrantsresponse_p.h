// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIVEDGRANTSRESPONSE_P_H
#define QTAWS_LISTRECEIVEDGRANTSRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListReceivedGrantsResponse;

class ListReceivedGrantsResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListReceivedGrantsResponsePrivate(ListReceivedGrantsResponse * const q);

    void parseListReceivedGrantsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReceivedGrantsResponse)
    Q_DISABLE_COPY(ListReceivedGrantsResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
