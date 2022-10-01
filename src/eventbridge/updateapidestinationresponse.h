// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIDESTINATIONRESPONSE_H
#define QTAWS_UPDATEAPIDESTINATIONRESPONSE_H

#include "eventbridgeresponse.h"
#include "updateapidestinationrequest.h"

namespace QtAws {
namespace EventBridge {

class UpdateApiDestinationResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT UpdateApiDestinationResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    UpdateApiDestinationResponse(const UpdateApiDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApiDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApiDestinationResponse)
    Q_DISABLE_COPY(UpdateApiDestinationResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
