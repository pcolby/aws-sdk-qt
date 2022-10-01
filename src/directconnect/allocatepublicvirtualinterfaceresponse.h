// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEPUBLICVIRTUALINTERFACERESPONSE_H
#define QTAWS_ALLOCATEPUBLICVIRTUALINTERFACERESPONSE_H

#include "directconnectresponse.h"
#include "allocatepublicvirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocatePublicVirtualInterfaceResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT AllocatePublicVirtualInterfaceResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    AllocatePublicVirtualInterfaceResponse(const AllocatePublicVirtualInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AllocatePublicVirtualInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocatePublicVirtualInterfaceResponse)
    Q_DISABLE_COPY(AllocatePublicVirtualInterfaceResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
