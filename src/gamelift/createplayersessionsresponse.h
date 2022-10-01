// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLAYERSESSIONSRESPONSE_H
#define QTAWS_CREATEPLAYERSESSIONSRESPONSE_H

#include "gameliftresponse.h"
#include "createplayersessionsrequest.h"

namespace QtAws {
namespace GameLift {

class CreatePlayerSessionsResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreatePlayerSessionsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreatePlayerSessionsResponse(const CreatePlayerSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePlayerSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlayerSessionsResponse)
    Q_DISABLE_COPY(CreatePlayerSessionsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
