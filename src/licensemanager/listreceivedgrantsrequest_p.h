// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIVEDGRANTSREQUEST_P_H
#define QTAWS_LISTRECEIVEDGRANTSREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listreceivedgrantsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListReceivedGrantsRequest;

class ListReceivedGrantsRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListReceivedGrantsRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListReceivedGrantsRequest * const q);
    ListReceivedGrantsRequestPrivate(const ListReceivedGrantsRequestPrivate &other,
                                   ListReceivedGrantsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReceivedGrantsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
