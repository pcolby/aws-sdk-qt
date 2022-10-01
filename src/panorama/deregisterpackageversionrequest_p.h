// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERPACKAGEVERSIONREQUEST_P_H
#define QTAWS_DEREGISTERPACKAGEVERSIONREQUEST_P_H

#include "panoramarequest_p.h"
#include "deregisterpackageversionrequest.h"

namespace QtAws {
namespace Panorama {

class DeregisterPackageVersionRequest;

class DeregisterPackageVersionRequestPrivate : public PanoramaRequestPrivate {

public:
    DeregisterPackageVersionRequestPrivate(const PanoramaRequest::Action action,
                                   DeregisterPackageVersionRequest * const q);
    DeregisterPackageVersionRequestPrivate(const DeregisterPackageVersionRequestPrivate &other,
                                   DeregisterPackageVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterPackageVersionRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
