// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRODUCTSUBSCRIPTIONSRESPONSE_P_H
#define QTAWS_LISTPRODUCTSUBSCRIPTIONSRESPONSE_P_H

#include "licensemanagerusersubscriptionsresponse_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class ListProductSubscriptionsResponse;

class ListProductSubscriptionsResponsePrivate : public LicenseManagerUserSubscriptionsResponsePrivate {

public:

    explicit ListProductSubscriptionsResponsePrivate(ListProductSubscriptionsResponse * const q);

    void parseListProductSubscriptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProductSubscriptionsResponse)
    Q_DISABLE_COPY(ListProductSubscriptionsResponsePrivate)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
