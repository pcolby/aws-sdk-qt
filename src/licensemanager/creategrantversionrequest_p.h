// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRANTVERSIONREQUEST_P_H
#define QTAWS_CREATEGRANTVERSIONREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "creategrantversionrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateGrantVersionRequest;

class CreateGrantVersionRequestPrivate : public LicenseManagerRequestPrivate {

public:
    CreateGrantVersionRequestPrivate(const LicenseManagerRequest::Action action,
                                   CreateGrantVersionRequest * const q);
    CreateGrantVersionRequestPrivate(const CreateGrantVersionRequestPrivate &other,
                                   CreateGrantVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGrantVersionRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
