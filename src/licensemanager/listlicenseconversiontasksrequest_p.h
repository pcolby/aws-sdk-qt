// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSECONVERSIONTASKSREQUEST_P_H
#define QTAWS_LISTLICENSECONVERSIONTASKSREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listlicenseconversiontasksrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseConversionTasksRequest;

class ListLicenseConversionTasksRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListLicenseConversionTasksRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListLicenseConversionTasksRequest * const q);
    ListLicenseConversionTasksRequestPrivate(const ListLicenseConversionTasksRequestPrivate &other,
                                   ListLicenseConversionTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLicenseConversionTasksRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
