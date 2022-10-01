// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWVPCINTERFACESRESPONSE_H
#define QTAWS_ADDFLOWVPCINTERFACESRESPONSE_H

#include "mediaconnectresponse.h"
#include "addflowvpcinterfacesrequest.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowVpcInterfacesResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT AddFlowVpcInterfacesResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    AddFlowVpcInterfacesResponse(const AddFlowVpcInterfacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddFlowVpcInterfacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddFlowVpcInterfacesResponse)
    Q_DISABLE_COPY(AddFlowVpcInterfacesResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
