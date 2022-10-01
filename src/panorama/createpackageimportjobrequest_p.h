// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGEIMPORTJOBREQUEST_P_H
#define QTAWS_CREATEPACKAGEIMPORTJOBREQUEST_P_H

#include "panoramarequest_p.h"
#include "createpackageimportjobrequest.h"

namespace QtAws {
namespace Panorama {

class CreatePackageImportJobRequest;

class CreatePackageImportJobRequestPrivate : public PanoramaRequestPrivate {

public:
    CreatePackageImportJobRequestPrivate(const PanoramaRequest::Action action,
                                   CreatePackageImportJobRequest * const q);
    CreatePackageImportJobRequestPrivate(const CreatePackageImportJobRequestPrivate &other,
                                   CreatePackageImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePackageImportJobRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
