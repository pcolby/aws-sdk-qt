// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSESREQUEST_P_H
#define QTAWS_LISTLICENSESREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listlicensesrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicensesRequest;

class ListLicensesRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListLicensesRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListLicensesRequest * const q);
    ListLicensesRequestPrivate(const ListLicensesRequestPrivate &other,
                                   ListLicensesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLicensesRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
