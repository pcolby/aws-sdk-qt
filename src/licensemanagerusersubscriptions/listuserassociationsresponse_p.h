// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTUSERASSOCIATIONSRESPONSE_P_H

#include "licensemanagerusersubscriptionsresponse_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class ListUserAssociationsResponse;

class ListUserAssociationsResponsePrivate : public LicenseManagerUserSubscriptionsResponsePrivate {

public:

    explicit ListUserAssociationsResponsePrivate(ListUserAssociationsResponse * const q);

    void parseListUserAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUserAssociationsResponse)
    Q_DISABLE_COPY(ListUserAssociationsResponsePrivate)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
