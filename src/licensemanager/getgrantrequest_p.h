// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGRANTREQUEST_P_H
#define QTAWS_GETGRANTREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "getgrantrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetGrantRequest;

class GetGrantRequestPrivate : public LicenseManagerRequestPrivate {

public:
    GetGrantRequestPrivate(const LicenseManagerRequest::Action action,
                                   GetGrantRequest * const q);
    GetGrantRequestPrivate(const GetGrantRequestPrivate &other,
                                   GetGrantRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGrantRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
