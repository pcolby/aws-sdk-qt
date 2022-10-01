// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGINGGROUPREQUEST_P_H
#define QTAWS_CREATEPACKAGINGGROUPREQUEST_P_H

#include "mediapackagevodrequest_p.h"
#include "createpackaginggrouprequest.h"

namespace QtAws {
namespace MediaPackageVod {

class CreatePackagingGroupRequest;

class CreatePackagingGroupRequestPrivate : public MediaPackageVodRequestPrivate {

public:
    CreatePackagingGroupRequestPrivate(const MediaPackageVodRequest::Action action,
                                   CreatePackagingGroupRequest * const q);
    CreatePackagingGroupRequestPrivate(const CreatePackagingGroupRequestPrivate &other,
                                   CreatePackagingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePackagingGroupRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
