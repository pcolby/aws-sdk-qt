// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRODUCTSUBSCRIPTIONSREQUEST_P_H
#define QTAWS_LISTPRODUCTSUBSCRIPTIONSREQUEST_P_H

#include "licensemanagerusersubscriptionsrequest_p.h"
#include "listproductsubscriptionsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class ListProductSubscriptionsRequest;

class ListProductSubscriptionsRequestPrivate : public LicenseManagerUserSubscriptionsRequestPrivate {

public:
    ListProductSubscriptionsRequestPrivate(const LicenseManagerUserSubscriptionsRequest::Action action,
                                   ListProductSubscriptionsRequest * const q);
    ListProductSubscriptionsRequestPrivate(const ListProductSubscriptionsRequestPrivate &other,
                                   ListProductSubscriptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProductSubscriptionsRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
