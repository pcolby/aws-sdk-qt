// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEPUBLICVIRTUALINTERFACEREQUEST_H
#define QTAWS_ALLOCATEPUBLICVIRTUALINTERFACEREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocatePublicVirtualInterfaceRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT AllocatePublicVirtualInterfaceRequest : public DirectConnectRequest {

public:
    AllocatePublicVirtualInterfaceRequest(const AllocatePublicVirtualInterfaceRequest &other);
    AllocatePublicVirtualInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocatePublicVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
