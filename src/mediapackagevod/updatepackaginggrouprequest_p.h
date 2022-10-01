// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGINGGROUPREQUEST_P_H
#define QTAWS_UPDATEPACKAGINGGROUPREQUEST_P_H

#include "mediapackagevodrequest_p.h"
#include "updatepackaginggrouprequest.h"

namespace QtAws {
namespace MediaPackageVod {

class UpdatePackagingGroupRequest;

class UpdatePackagingGroupRequestPrivate : public MediaPackageVodRequestPrivate {

public:
    UpdatePackagingGroupRequestPrivate(const MediaPackageVodRequest::Action action,
                                   UpdatePackagingGroupRequest * const q);
    UpdatePackagingGroupRequestPrivate(const UpdatePackagingGroupRequestPrivate &other,
                                   UpdatePackagingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePackagingGroupRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
