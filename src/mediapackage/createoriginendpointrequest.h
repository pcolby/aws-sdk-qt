// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINENDPOINTREQUEST_H
#define QTAWS_CREATEORIGINENDPOINTREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class CreateOriginEndpointRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT CreateOriginEndpointRequest : public MediaPackageRequest {

public:
    CreateOriginEndpointRequest(const CreateOriginEndpointRequest &other);
    CreateOriginEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOriginEndpointRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
