// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGEREQUEST_P_H
#define QTAWS_CREATEPACKAGEREQUEST_P_H

#include "panoramarequest_p.h"
#include "createpackagerequest.h"

namespace QtAws {
namespace Panorama {

class CreatePackageRequest;

class CreatePackageRequestPrivate : public PanoramaRequestPrivate {

public:
    CreatePackageRequestPrivate(const PanoramaRequest::Action action,
                                   CreatePackageRequest * const q);
    CreatePackageRequestPrivate(const CreatePackageRequestPrivate &other,
                                   CreatePackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePackageRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
