// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUESTATUSRESPONSE_H
#define QTAWS_UPDATEQUEUESTATUSRESPONSE_H

#include "connectresponse.h"
#include "updatequeuestatusrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueStatusResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateQueueStatusResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateQueueStatusResponse(const UpdateQueueStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateQueueStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQueueStatusResponse)
    Q_DISABLE_COPY(UpdateQueueStatusResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
