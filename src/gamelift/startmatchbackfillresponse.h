// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMATCHBACKFILLRESPONSE_H
#define QTAWS_STARTMATCHBACKFILLRESPONSE_H

#include "gameliftresponse.h"
#include "startmatchbackfillrequest.h"

namespace QtAws {
namespace GameLift {

class StartMatchBackfillResponsePrivate;

class QTAWSGAMELIFT_EXPORT StartMatchBackfillResponse : public GameLiftResponse {
    Q_OBJECT

public:
    StartMatchBackfillResponse(const StartMatchBackfillRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMatchBackfillRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMatchBackfillResponse)
    Q_DISABLE_COPY(StartMatchBackfillResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
