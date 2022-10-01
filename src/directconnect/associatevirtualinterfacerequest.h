// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVIRTUALINTERFACEREQUEST_H
#define QTAWS_ASSOCIATEVIRTUALINTERFACEREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateVirtualInterfaceRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT AssociateVirtualInterfaceRequest : public DirectConnectRequest {

public:
    AssociateVirtualInterfaceRequest(const AssociateVirtualInterfaceRequest &other);
    AssociateVirtualInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
