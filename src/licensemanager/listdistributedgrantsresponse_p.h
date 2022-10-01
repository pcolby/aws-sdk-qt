// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTEDGRANTSRESPONSE_P_H
#define QTAWS_LISTDISTRIBUTEDGRANTSRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListDistributedGrantsResponse;

class ListDistributedGrantsResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListDistributedGrantsResponsePrivate(ListDistributedGrantsResponse * const q);

    void parseListDistributedGrantsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDistributedGrantsResponse)
    Q_DISABLE_COPY(ListDistributedGrantsResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
