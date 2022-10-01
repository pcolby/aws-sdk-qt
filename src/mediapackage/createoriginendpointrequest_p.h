// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINENDPOINTREQUEST_P_H
#define QTAWS_CREATEORIGINENDPOINTREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "createoriginendpointrequest.h"

namespace QtAws {
namespace MediaPackage {

class CreateOriginEndpointRequest;

class CreateOriginEndpointRequestPrivate : public MediaPackageRequestPrivate {

public:
    CreateOriginEndpointRequestPrivate(const MediaPackageRequest::Action action,
                                   CreateOriginEndpointRequest * const q);
    CreateOriginEndpointRequestPrivate(const CreateOriginEndpointRequestPrivate &other,
                                   CreateOriginEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOriginEndpointRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
