// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLAYERSESSIONRESPONSE_H
#define QTAWS_CREATEPLAYERSESSIONRESPONSE_H

#include "gameliftresponse.h"
#include "createplayersessionrequest.h"

namespace QtAws {
namespace GameLift {

class CreatePlayerSessionResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreatePlayerSessionResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreatePlayerSessionResponse(const CreatePlayerSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePlayerSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlayerSessionResponse)
    Q_DISABLE_COPY(CreatePlayerSessionResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
