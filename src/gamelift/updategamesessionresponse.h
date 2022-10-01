// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESESSIONRESPONSE_H
#define QTAWS_UPDATEGAMESESSIONRESPONSE_H

#include "gameliftresponse.h"
#include "updategamesessionrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateGameSessionResponsePrivate;

class QTAWSGAMELIFT_EXPORT UpdateGameSessionResponse : public GameLiftResponse {
    Q_OBJECT

public:
    UpdateGameSessionResponse(const UpdateGameSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGameSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGameSessionResponse)
    Q_DISABLE_COPY(UpdateGameSessionResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
