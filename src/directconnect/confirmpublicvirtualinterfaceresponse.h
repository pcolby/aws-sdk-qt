// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMPUBLICVIRTUALINTERFACERESPONSE_H
#define QTAWS_CONFIRMPUBLICVIRTUALINTERFACERESPONSE_H

#include "directconnectresponse.h"
#include "confirmpublicvirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmPublicVirtualInterfaceResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT ConfirmPublicVirtualInterfaceResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    ConfirmPublicVirtualInterfaceResponse(const ConfirmPublicVirtualInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfirmPublicVirtualInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmPublicVirtualInterfaceResponse)
    Q_DISABLE_COPY(ConfirmPublicVirtualInterfaceResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
