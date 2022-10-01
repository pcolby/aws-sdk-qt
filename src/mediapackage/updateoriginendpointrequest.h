// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORIGINENDPOINTREQUEST_H
#define QTAWS_UPDATEORIGINENDPOINTREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class UpdateOriginEndpointRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT UpdateOriginEndpointRequest : public MediaPackageRequest {

public:
    UpdateOriginEndpointRequest(const UpdateOriginEndpointRequest &other);
    UpdateOriginEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOriginEndpointRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
