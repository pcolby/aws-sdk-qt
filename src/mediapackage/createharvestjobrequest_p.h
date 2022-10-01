// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHARVESTJOBREQUEST_P_H
#define QTAWS_CREATEHARVESTJOBREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "createharvestjobrequest.h"

namespace QtAws {
namespace MediaPackage {

class CreateHarvestJobRequest;

class CreateHarvestJobRequestPrivate : public MediaPackageRequestPrivate {

public:
    CreateHarvestJobRequestPrivate(const MediaPackageRequest::Action action,
                                   CreateHarvestJobRequest * const q);
    CreateHarvestJobRequestPrivate(const CreateHarvestJobRequestPrivate &other,
                                   CreateHarvestJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHarvestJobRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
