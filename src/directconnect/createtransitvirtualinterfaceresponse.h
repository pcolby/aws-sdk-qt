// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITVIRTUALINTERFACERESPONSE_H
#define QTAWS_CREATETRANSITVIRTUALINTERFACERESPONSE_H

#include "directconnectresponse.h"
#include "createtransitvirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateTransitVirtualInterfaceResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateTransitVirtualInterfaceResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    CreateTransitVirtualInterfaceResponse(const CreateTransitVirtualInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitVirtualInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitVirtualInterfaceResponse)
    Q_DISABLE_COPY(CreateTransitVirtualInterfaceResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
