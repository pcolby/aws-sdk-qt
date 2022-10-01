// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEPRIVATEVIRTUALINTERFACERESPONSE_H
#define QTAWS_ALLOCATEPRIVATEVIRTUALINTERFACERESPONSE_H

#include "directconnectresponse.h"
#include "allocateprivatevirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocatePrivateVirtualInterfaceResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT AllocatePrivateVirtualInterfaceResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    AllocatePrivateVirtualInterfaceResponse(const AllocatePrivateVirtualInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AllocatePrivateVirtualInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocatePrivateVirtualInterfaceResponse)
    Q_DISABLE_COPY(AllocatePrivateVirtualInterfaceResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
