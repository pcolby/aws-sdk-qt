// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORIGINENDPOINTREQUEST_P_H
#define QTAWS_DELETEORIGINENDPOINTREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "deleteoriginendpointrequest.h"

namespace QtAws {
namespace MediaPackage {

class DeleteOriginEndpointRequest;

class DeleteOriginEndpointRequestPrivate : public MediaPackageRequestPrivate {

public:
    DeleteOriginEndpointRequestPrivate(const MediaPackageRequest::Action action,
                                   DeleteOriginEndpointRequest * const q);
    DeleteOriginEndpointRequestPrivate(const DeleteOriginEndpointRequestPrivate &other,
                                   DeleteOriginEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOriginEndpointRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
