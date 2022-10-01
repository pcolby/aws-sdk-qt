// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMATCHMAKINGRULESETRESPONSE_H
#define QTAWS_CREATEMATCHMAKINGRULESETRESPONSE_H

#include "gameliftresponse.h"
#include "creatematchmakingrulesetrequest.h"

namespace QtAws {
namespace GameLift {

class CreateMatchmakingRuleSetResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreateMatchmakingRuleSetResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreateMatchmakingRuleSetResponse(const CreateMatchmakingRuleSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMatchmakingRuleSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMatchmakingRuleSetResponse)
    Q_DISABLE_COPY(CreateMatchmakingRuleSetResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
