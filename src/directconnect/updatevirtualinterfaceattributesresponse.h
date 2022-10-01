// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALINTERFACEATTRIBUTESRESPONSE_H
#define QTAWS_UPDATEVIRTUALINTERFACEATTRIBUTESRESPONSE_H

#include "directconnectresponse.h"
#include "updatevirtualinterfaceattributesrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateVirtualInterfaceAttributesResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT UpdateVirtualInterfaceAttributesResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    UpdateVirtualInterfaceAttributesResponse(const UpdateVirtualInterfaceAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVirtualInterfaceAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVirtualInterfaceAttributesResponse)
    Q_DISABLE_COPY(UpdateVirtualInterfaceAttributesResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
