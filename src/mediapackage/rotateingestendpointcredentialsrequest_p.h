// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATEINGESTENDPOINTCREDENTIALSREQUEST_P_H
#define QTAWS_ROTATEINGESTENDPOINTCREDENTIALSREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "rotateingestendpointcredentialsrequest.h"

namespace QtAws {
namespace MediaPackage {

class RotateIngestEndpointCredentialsRequest;

class RotateIngestEndpointCredentialsRequestPrivate : public MediaPackageRequestPrivate {

public:
    RotateIngestEndpointCredentialsRequestPrivate(const MediaPackageRequest::Action action,
                                   RotateIngestEndpointCredentialsRequest * const q);
    RotateIngestEndpointCredentialsRequestPrivate(const RotateIngestEndpointCredentialsRequestPrivate &other,
                                   RotateIngestEndpointCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RotateIngestEndpointCredentialsRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
