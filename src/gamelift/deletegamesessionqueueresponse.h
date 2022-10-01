// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGAMESESSIONQUEUERESPONSE_H
#define QTAWS_DELETEGAMESESSIONQUEUERESPONSE_H

#include "gameliftresponse.h"
#include "deletegamesessionqueuerequest.h"

namespace QtAws {
namespace GameLift {

class DeleteGameSessionQueueResponsePrivate;

class QTAWSGAMELIFT_EXPORT DeleteGameSessionQueueResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DeleteGameSessionQueueResponse(const DeleteGameSessionQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGameSessionQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGameSessionQueueResponse)
    Q_DISABLE_COPY(DeleteGameSessionQueueResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
