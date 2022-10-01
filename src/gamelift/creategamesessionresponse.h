// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMESESSIONRESPONSE_H
#define QTAWS_CREATEGAMESESSIONRESPONSE_H

#include "gameliftresponse.h"
#include "creategamesessionrequest.h"

namespace QtAws {
namespace GameLift {

class CreateGameSessionResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreateGameSessionResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreateGameSessionResponse(const CreateGameSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGameSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGameSessionResponse)
    Q_DISABLE_COPY(CreateGameSessionResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
