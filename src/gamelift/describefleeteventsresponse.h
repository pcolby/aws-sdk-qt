// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETEVENTSRESPONSE_H
#define QTAWS_DESCRIBEFLEETEVENTSRESPONSE_H

#include "gameliftresponse.h"
#include "describefleeteventsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetEventsResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetEventsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeFleetEventsResponse(const DescribeFleetEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetEventsResponse)
    Q_DISABLE_COPY(DescribeFleetEventsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
