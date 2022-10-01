// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSTOKENREQUEST_P_H
#define QTAWS_GETACCESSTOKENREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "getaccesstokenrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetAccessTokenRequest;

class GetAccessTokenRequestPrivate : public LicenseManagerRequestPrivate {

public:
    GetAccessTokenRequestPrivate(const LicenseManagerRequest::Action action,
                                   GetAccessTokenRequest * const q);
    GetAccessTokenRequestPrivate(const GetAccessTokenRequestPrivate &other,
                                   GetAccessTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessTokenRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
