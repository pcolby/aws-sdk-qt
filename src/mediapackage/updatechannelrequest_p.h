// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELREQUEST_P_H
#define QTAWS_UPDATECHANNELREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "updatechannelrequest.h"

namespace QtAws {
namespace MediaPackage {

class UpdateChannelRequest;

class UpdateChannelRequestPrivate : public MediaPackageRequestPrivate {

public:
    UpdateChannelRequestPrivate(const MediaPackageRequest::Action action,
                                   UpdateChannelRequest * const q);
    UpdateChannelRequestPrivate(const UpdateChannelRequestPrivate &other,
                                   UpdateChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateChannelRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
