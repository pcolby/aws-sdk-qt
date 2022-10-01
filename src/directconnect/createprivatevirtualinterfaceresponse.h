// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRIVATEVIRTUALINTERFACERESPONSE_H
#define QTAWS_CREATEPRIVATEVIRTUALINTERFACERESPONSE_H

#include "directconnectresponse.h"
#include "createprivatevirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class CreatePrivateVirtualInterfaceResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT CreatePrivateVirtualInterfaceResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    CreatePrivateVirtualInterfaceResponse(const CreatePrivateVirtualInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePrivateVirtualInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePrivateVirtualInterfaceResponse)
    Q_DISABLE_COPY(CreatePrivateVirtualInterfaceResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
