// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTMATCHRESPONSE_H
#define QTAWS_ACCEPTMATCHRESPONSE_H

#include "gameliftresponse.h"
#include "acceptmatchrequest.h"

namespace QtAws {
namespace GameLift {

class AcceptMatchResponsePrivate;

class QTAWSGAMELIFT_EXPORT AcceptMatchResponse : public GameLiftResponse {
    Q_OBJECT

public:
    AcceptMatchResponse(const AcceptMatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptMatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptMatchResponse)
    Q_DISABLE_COPY(AcceptMatchResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
