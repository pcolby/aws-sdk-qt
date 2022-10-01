// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEPRIVATEVIRTUALINTERFACEREQUEST_H
#define QTAWS_ALLOCATEPRIVATEVIRTUALINTERFACEREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocatePrivateVirtualInterfaceRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT AllocatePrivateVirtualInterfaceRequest : public DirectConnectRequest {

public:
    AllocatePrivateVirtualInterfaceRequest(const AllocatePrivateVirtualInterfaceRequest &other);
    AllocatePrivateVirtualInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocatePrivateVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
