// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEHOURSOFOPERATIONRESPONSE_H
#define QTAWS_UPDATEQUEUEHOURSOFOPERATIONRESPONSE_H

#include "connectresponse.h"
#include "updatequeuehoursofoperationrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueHoursOfOperationResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateQueueHoursOfOperationResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateQueueHoursOfOperationResponse(const UpdateQueueHoursOfOperationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateQueueHoursOfOperationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQueueHoursOfOperationResponse)
    Q_DISABLE_COPY(UpdateQueueHoursOfOperationResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
