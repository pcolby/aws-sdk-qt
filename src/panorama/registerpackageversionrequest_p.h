// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERPACKAGEVERSIONREQUEST_P_H
#define QTAWS_REGISTERPACKAGEVERSIONREQUEST_P_H

#include "panoramarequest_p.h"
#include "registerpackageversionrequest.h"

namespace QtAws {
namespace Panorama {

class RegisterPackageVersionRequest;

class RegisterPackageVersionRequestPrivate : public PanoramaRequestPrivate {

public:
    RegisterPackageVersionRequestPrivate(const PanoramaRequest::Action action,
                                   RegisterPackageVersionRequest * const q);
    RegisterPackageVersionRequestPrivate(const RegisterPackageVersionRequestPrivate &other,
                                   RegisterPackageVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterPackageVersionRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
