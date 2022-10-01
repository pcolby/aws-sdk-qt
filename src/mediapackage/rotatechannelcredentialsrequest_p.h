// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATECHANNELCREDENTIALSREQUEST_P_H
#define QTAWS_ROTATECHANNELCREDENTIALSREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "rotatechannelcredentialsrequest.h"

namespace QtAws {
namespace MediaPackage {

class RotateChannelCredentialsRequest;

class RotateChannelCredentialsRequestPrivate : public MediaPackageRequestPrivate {

public:
    RotateChannelCredentialsRequestPrivate(const MediaPackageRequest::Action action,
                                   RotateChannelCredentialsRequest * const q);
    RotateChannelCredentialsRequestPrivate(const RotateChannelCredentialsRequestPrivate &other,
                                   RotateChannelCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RotateChannelCredentialsRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
