// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUENAMERESPONSE_H
#define QTAWS_UPDATEQUEUENAMERESPONSE_H

#include "connectresponse.h"
#include "updatequeuenamerequest.h"

namespace QtAws {
namespace Connect {

class UpdateQueueNameResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateQueueNameResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateQueueNameResponse(const UpdateQueueNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateQueueNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQueueNameResponse)
    Q_DISABLE_COPY(UpdateQueueNameResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
