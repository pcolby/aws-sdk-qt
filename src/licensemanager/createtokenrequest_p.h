// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOKENREQUEST_P_H
#define QTAWS_CREATETOKENREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "createtokenrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateTokenRequest;

class CreateTokenRequestPrivate : public LicenseManagerRequestPrivate {

public:
    CreateTokenRequestPrivate(const LicenseManagerRequest::Action action,
                                   CreateTokenRequest * const q);
    CreateTokenRequestPrivate(const CreateTokenRequestPrivate &other,
                                   CreateTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTokenRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
