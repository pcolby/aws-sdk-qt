// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONSRESPONSE_H
#define QTAWS_DESCRIBEGAMESESSIONSRESPONSE_H

#include "gameliftresponse.h"
#include "describegamesessionsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionsResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameSessionsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeGameSessionsResponse(const DescribeGameSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGameSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameSessionsResponse)
    Q_DISABLE_COPY(DescribeGameSessionsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
