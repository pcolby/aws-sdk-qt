// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESESSIONQUEUERESPONSE_H
#define QTAWS_UPDATEGAMESESSIONQUEUERESPONSE_H

#include "gameliftresponse.h"
#include "updategamesessionqueuerequest.h"

namespace QtAws {
namespace GameLift {

class UpdateGameSessionQueueResponsePrivate;

class QTAWSGAMELIFT_EXPORT UpdateGameSessionQueueResponse : public GameLiftResponse {
    Q_OBJECT

public:
    UpdateGameSessionQueueResponse(const UpdateGameSessionQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGameSessionQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGameSessionQueueResponse)
    Q_DISABLE_COPY(UpdateGameSessionQueueResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
