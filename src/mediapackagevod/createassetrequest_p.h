// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSETREQUEST_P_H
#define QTAWS_CREATEASSETREQUEST_P_H

#include "mediapackagevodrequest_p.h"
#include "createassetrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class CreateAssetRequest;

class CreateAssetRequestPrivate : public MediaPackageVodRequestPrivate {

public:
    CreateAssetRequestPrivate(const MediaPackageVodRequest::Action action,
                                   CreateAssetRequest * const q);
    CreateAssetRequestPrivate(const CreateAssetRequestPrivate &other,
                                   CreateAssetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssetRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
