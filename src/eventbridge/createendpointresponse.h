// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTRESPONSE_H
#define QTAWS_CREATEENDPOINTRESPONSE_H

#include "eventbridgeresponse.h"
#include "createendpointrequest.h"

namespace QtAws {
namespace EventBridge {

class CreateEndpointResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT CreateEndpointResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    CreateEndpointResponse(const CreateEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEndpointResponse)
    Q_DISABLE_COPY(CreateEndpointResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
