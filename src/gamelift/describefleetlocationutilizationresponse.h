// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETLOCATIONUTILIZATIONRESPONSE_H
#define QTAWS_DESCRIBEFLEETLOCATIONUTILIZATIONRESPONSE_H

#include "gameliftresponse.h"
#include "describefleetlocationutilizationrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetLocationUtilizationResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetLocationUtilizationResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeFleetLocationUtilizationResponse(const DescribeFleetLocationUtilizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetLocationUtilizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetLocationUtilizationResponse)
    Q_DISABLE_COPY(DescribeFleetLocationUtilizationResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
