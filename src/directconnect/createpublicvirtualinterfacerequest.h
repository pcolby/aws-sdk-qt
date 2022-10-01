// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICVIRTUALINTERFACEREQUEST_H
#define QTAWS_CREATEPUBLICVIRTUALINTERFACEREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreatePublicVirtualInterfaceRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT CreatePublicVirtualInterfaceRequest : public DirectConnectRequest {

public:
    CreatePublicVirtualInterfaceRequest(const CreatePublicVirtualInterfaceRequest &other);
    CreatePublicVirtualInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePublicVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
