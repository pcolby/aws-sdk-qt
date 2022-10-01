// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEOUTBOUNDCALLERCONFIGRESPONSE_H
#define QTAWS_UPDATEQUEUEOUTBOUNDCALLERCONFIGRESPONSE_H

#include "connectresponse.h"
#include "updatequeueoutboundcallerconfigrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueOutboundCallerConfigResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateQueueOutboundCallerConfigResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateQueueOutboundCallerConfigResponse(const UpdateQueueOutboundCallerConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateQueueOutboundCallerConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQueueOutboundCallerConfigResponse)
    Q_DISABLE_COPY(UpdateQueueOutboundCallerConfigResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
