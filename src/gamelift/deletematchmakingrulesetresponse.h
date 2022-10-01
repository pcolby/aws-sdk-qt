// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMATCHMAKINGRULESETRESPONSE_H
#define QTAWS_DELETEMATCHMAKINGRULESETRESPONSE_H

#include "gameliftresponse.h"
#include "deletematchmakingrulesetrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteMatchmakingRuleSetResponsePrivate;

class QTAWSGAMELIFT_EXPORT DeleteMatchmakingRuleSetResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DeleteMatchmakingRuleSetResponse(const DeleteMatchmakingRuleSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMatchmakingRuleSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMatchmakingRuleSetResponse)
    Q_DISABLE_COPY(DeleteMatchmakingRuleSetResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
