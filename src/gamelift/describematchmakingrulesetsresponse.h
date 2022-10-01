// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMATCHMAKINGRULESETSRESPONSE_H
#define QTAWS_DESCRIBEMATCHMAKINGRULESETSRESPONSE_H

#include "gameliftresponse.h"
#include "describematchmakingrulesetsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeMatchmakingRuleSetsResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeMatchmakingRuleSetsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeMatchmakingRuleSetsResponse(const DescribeMatchmakingRuleSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMatchmakingRuleSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMatchmakingRuleSetsResponse)
    Q_DISABLE_COPY(DescribeMatchmakingRuleSetsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
