// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLAYERSESSIONSRESPONSE_H
#define QTAWS_DESCRIBEPLAYERSESSIONSRESPONSE_H

#include "gameliftresponse.h"
#include "describeplayersessionsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribePlayerSessionsResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribePlayerSessionsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribePlayerSessionsResponse(const DescribePlayerSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePlayerSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePlayerSessionsResponse)
    Q_DISABLE_COPY(DescribePlayerSessionsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
