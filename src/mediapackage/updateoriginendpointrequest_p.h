// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORIGINENDPOINTREQUEST_P_H
#define QTAWS_UPDATEORIGINENDPOINTREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "updateoriginendpointrequest.h"

namespace QtAws {
namespace MediaPackage {

class UpdateOriginEndpointRequest;

class UpdateOriginEndpointRequestPrivate : public MediaPackageRequestPrivate {

public:
    UpdateOriginEndpointRequestPrivate(const MediaPackageRequest::Action action,
                                   UpdateOriginEndpointRequest * const q);
    UpdateOriginEndpointRequestPrivate(const UpdateOriginEndpointRequestPrivate &other,
                                   UpdateOriginEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateOriginEndpointRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
