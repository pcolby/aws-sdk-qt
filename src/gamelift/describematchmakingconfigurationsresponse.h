// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMATCHMAKINGCONFIGURATIONSRESPONSE_H
#define QTAWS_DESCRIBEMATCHMAKINGCONFIGURATIONSRESPONSE_H

#include "gameliftresponse.h"
#include "describematchmakingconfigurationsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeMatchmakingConfigurationsResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeMatchmakingConfigurationsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeMatchmakingConfigurationsResponse(const DescribeMatchmakingConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMatchmakingConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMatchmakingConfigurationsResponse)
    Q_DISABLE_COPY(DescribeMatchmakingConfigurationsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
