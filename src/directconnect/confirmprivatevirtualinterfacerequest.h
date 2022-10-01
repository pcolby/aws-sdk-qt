// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMPRIVATEVIRTUALINTERFACEREQUEST_H
#define QTAWS_CONFIRMPRIVATEVIRTUALINTERFACEREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmPrivateVirtualInterfaceRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT ConfirmPrivateVirtualInterfaceRequest : public DirectConnectRequest {

public:
    ConfirmPrivateVirtualInterfaceRequest(const ConfirmPrivateVirtualInterfaceRequest &other);
    ConfirmPrivateVirtualInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmPrivateVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
