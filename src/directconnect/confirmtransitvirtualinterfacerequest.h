// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMTRANSITVIRTUALINTERFACEREQUEST_H
#define QTAWS_CONFIRMTRANSITVIRTUALINTERFACEREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmTransitVirtualInterfaceRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT ConfirmTransitVirtualInterfaceRequest : public DirectConnectRequest {

public:
    ConfirmTransitVirtualInterfaceRequest(const ConfirmTransitVirtualInterfaceRequest &other);
    ConfirmTransitVirtualInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmTransitVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
