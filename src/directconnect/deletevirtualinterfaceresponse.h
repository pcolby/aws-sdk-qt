// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALINTERFACERESPONSE_H
#define QTAWS_DELETEVIRTUALINTERFACERESPONSE_H

#include "directconnectresponse.h"
#include "deletevirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteVirtualInterfaceResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteVirtualInterfaceResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DeleteVirtualInterfaceResponse(const DeleteVirtualInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVirtualInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVirtualInterfaceResponse)
    Q_DISABLE_COPY(DeleteVirtualInterfaceResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
