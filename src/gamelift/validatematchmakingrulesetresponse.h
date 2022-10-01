// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEMATCHMAKINGRULESETRESPONSE_H
#define QTAWS_VALIDATEMATCHMAKINGRULESETRESPONSE_H

#include "gameliftresponse.h"
#include "validatematchmakingrulesetrequest.h"

namespace QtAws {
namespace GameLift {

class ValidateMatchmakingRuleSetResponsePrivate;

class QTAWSGAMELIFT_EXPORT ValidateMatchmakingRuleSetResponse : public GameLiftResponse {
    Q_OBJECT

public:
    ValidateMatchmakingRuleSetResponse(const ValidateMatchmakingRuleSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ValidateMatchmakingRuleSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateMatchmakingRuleSetResponse)
    Q_DISABLE_COPY(ValidateMatchmakingRuleSetResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
