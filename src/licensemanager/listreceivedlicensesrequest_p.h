// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIVEDLICENSESREQUEST_P_H
#define QTAWS_LISTRECEIVEDLICENSESREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listreceivedlicensesrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListReceivedLicensesRequest;

class ListReceivedLicensesRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListReceivedLicensesRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListReceivedLicensesRequest * const q);
    ListReceivedLicensesRequestPrivate(const ListReceivedLicensesRequestPrivate &other,
                                   ListReceivedLicensesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReceivedLicensesRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
