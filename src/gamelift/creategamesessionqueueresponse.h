// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMESESSIONQUEUERESPONSE_H
#define QTAWS_CREATEGAMESESSIONQUEUERESPONSE_H

#include "gameliftresponse.h"
#include "creategamesessionqueuerequest.h"

namespace QtAws {
namespace GameLift {

class CreateGameSessionQueueResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreateGameSessionQueueResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreateGameSessionQueueResponse(const CreateGameSessionQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGameSessionQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGameSessionQueueResponse)
    Q_DISABLE_COPY(CreateGameSessionQueueResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
