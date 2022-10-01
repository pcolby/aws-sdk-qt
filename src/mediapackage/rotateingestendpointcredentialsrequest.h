// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATEINGESTENDPOINTCREDENTIALSREQUEST_H
#define QTAWS_ROTATEINGESTENDPOINTCREDENTIALSREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class RotateIngestEndpointCredentialsRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT RotateIngestEndpointCredentialsRequest : public MediaPackageRequest {

public:
    RotateIngestEndpointCredentialsRequest(const RotateIngestEndpointCredentialsRequest &other);
    RotateIngestEndpointCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RotateIngestEndpointCredentialsRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
