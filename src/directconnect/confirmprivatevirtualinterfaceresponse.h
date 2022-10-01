// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMPRIVATEVIRTUALINTERFACERESPONSE_H
#define QTAWS_CONFIRMPRIVATEVIRTUALINTERFACERESPONSE_H

#include "directconnectresponse.h"
#include "confirmprivatevirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmPrivateVirtualInterfaceResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT ConfirmPrivateVirtualInterfaceResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    ConfirmPrivateVirtualInterfaceResponse(const ConfirmPrivateVirtualInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfirmPrivateVirtualInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmPrivateVirtualInterfaceResponse)
    Q_DISABLE_COPY(ConfirmPrivateVirtualInterfaceResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
