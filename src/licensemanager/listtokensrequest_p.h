// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOKENSREQUEST_P_H
#define QTAWS_LISTTOKENSREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listtokensrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListTokensRequest;

class ListTokensRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListTokensRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListTokensRequest * const q);
    ListTokensRequestPrivate(const ListTokensRequestPrivate &other,
                                   ListTokensRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTokensRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
