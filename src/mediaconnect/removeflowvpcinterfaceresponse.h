// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWVPCINTERFACERESPONSE_H
#define QTAWS_REMOVEFLOWVPCINTERFACERESPONSE_H

#include "mediaconnectresponse.h"
#include "removeflowvpcinterfacerequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowVpcInterfaceResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT RemoveFlowVpcInterfaceResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    RemoveFlowVpcInterfaceResponse(const RemoveFlowVpcInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveFlowVpcInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFlowVpcInterfaceResponse)
    Q_DISABLE_COPY(RemoveFlowVpcInterfaceResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
