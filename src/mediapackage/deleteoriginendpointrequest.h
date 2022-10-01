// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORIGINENDPOINTREQUEST_H
#define QTAWS_DELETEORIGINENDPOINTREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class DeleteOriginEndpointRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT DeleteOriginEndpointRequest : public MediaPackageRequest {

public:
    DeleteOriginEndpointRequest(const DeleteOriginEndpointRequest &other);
    DeleteOriginEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOriginEndpointRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
