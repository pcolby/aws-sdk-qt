// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATETRANSITVIRTUALINTERFACERESPONSE_H
#define QTAWS_ALLOCATETRANSITVIRTUALINTERFACERESPONSE_H

#include "directconnectresponse.h"
#include "allocatetransitvirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocateTransitVirtualInterfaceResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT AllocateTransitVirtualInterfaceResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    AllocateTransitVirtualInterfaceResponse(const AllocateTransitVirtualInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AllocateTransitVirtualInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateTransitVirtualInterfaceResponse)
    Q_DISABLE_COPY(AllocateTransitVirtualInterfaceResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
