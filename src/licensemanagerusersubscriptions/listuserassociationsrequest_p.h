// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTUSERASSOCIATIONSREQUEST_P_H

#include "licensemanagerusersubscriptionsrequest_p.h"
#include "listuserassociationsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class ListUserAssociationsRequest;

class ListUserAssociationsRequestPrivate : public LicenseManagerUserSubscriptionsRequestPrivate {

public:
    ListUserAssociationsRequestPrivate(const LicenseManagerUserSubscriptionsRequest::Action action,
                                   ListUserAssociationsRequest * const q);
    ListUserAssociationsRequestPrivate(const ListUserAssociationsRequestPrivate &other,
                                   ListUserAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUserAssociationsRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
