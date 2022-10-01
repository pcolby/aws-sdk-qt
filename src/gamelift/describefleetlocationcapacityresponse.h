// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETLOCATIONCAPACITYRESPONSE_H
#define QTAWS_DESCRIBEFLEETLOCATIONCAPACITYRESPONSE_H

#include "gameliftresponse.h"
#include "describefleetlocationcapacityrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetLocationCapacityResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetLocationCapacityResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeFleetLocationCapacityResponse(const DescribeFleetLocationCapacityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetLocationCapacityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetLocationCapacityResponse)
    Q_DISABLE_COPY(DescribeFleetLocationCapacityResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
