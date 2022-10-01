// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEMAXCONTACTSRESPONSE_H
#define QTAWS_UPDATEQUEUEMAXCONTACTSRESPONSE_H

#include "connectresponse.h"
#include "updatequeuemaxcontactsrequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueMaxContactsResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateQueueMaxContactsResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateQueueMaxContactsResponse(const UpdateQueueMaxContactsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateQueueMaxContactsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQueueMaxContactsResponse)
    Q_DISABLE_COPY(UpdateQueueMaxContactsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
