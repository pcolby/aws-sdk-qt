// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMTRANSITVIRTUALINTERFACERESPONSE_H
#define QTAWS_CONFIRMTRANSITVIRTUALINTERFACERESPONSE_H

#include "directconnectresponse.h"
#include "confirmtransitvirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmTransitVirtualInterfaceResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT ConfirmTransitVirtualInterfaceResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    ConfirmTransitVirtualInterfaceResponse(const ConfirmTransitVirtualInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfirmTransitVirtualInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmTransitVirtualInterfaceResponse)
    Q_DISABLE_COPY(ConfirmTransitVirtualInterfaceResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
