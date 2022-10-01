// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATETRANSITVIRTUALINTERFACEREQUEST_H
#define QTAWS_ALLOCATETRANSITVIRTUALINTERFACEREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocateTransitVirtualInterfaceRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT AllocateTransitVirtualInterfaceRequest : public DirectConnectRequest {

public:
    AllocateTransitVirtualInterfaceRequest(const AllocateTransitVirtualInterfaceRequest &other);
    AllocateTransitVirtualInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateTransitVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
