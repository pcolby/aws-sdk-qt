// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVIRTUALINTERFACERESPONSE_H
#define QTAWS_ASSOCIATEVIRTUALINTERFACERESPONSE_H

#include "directconnectresponse.h"
#include "associatevirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateVirtualInterfaceResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT AssociateVirtualInterfaceResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    AssociateVirtualInterfaceResponse(const AssociateVirtualInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateVirtualInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateVirtualInterfaceResponse)
    Q_DISABLE_COPY(AssociateVirtualInterfaceResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
