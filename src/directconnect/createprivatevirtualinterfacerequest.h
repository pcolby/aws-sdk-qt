// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRIVATEVIRTUALINTERFACEREQUEST_H
#define QTAWS_CREATEPRIVATEVIRTUALINTERFACEREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreatePrivateVirtualInterfaceRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT CreatePrivateVirtualInterfaceRequest : public DirectConnectRequest {

public:
    CreatePrivateVirtualInterfaceRequest(const CreatePrivateVirtualInterfaceRequest &other);
    CreatePrivateVirtualInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePrivateVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
