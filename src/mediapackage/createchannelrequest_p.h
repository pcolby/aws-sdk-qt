// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELREQUEST_P_H
#define QTAWS_CREATECHANNELREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "createchannelrequest.h"

namespace QtAws {
namespace MediaPackage {

class CreateChannelRequest;

class CreateChannelRequestPrivate : public MediaPackageRequestPrivate {

public:
    CreateChannelRequestPrivate(const MediaPackageRequest::Action action,
                                   CreateChannelRequest * const q);
    CreateChannelRequestPrivate(const CreateChannelRequestPrivate &other,
                                   CreateChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChannelRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
