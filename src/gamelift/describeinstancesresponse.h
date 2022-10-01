// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESRESPONSE_H
#define QTAWS_DESCRIBEINSTANCESRESPONSE_H

#include "gameliftresponse.h"
#include "describeinstancesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeInstancesResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeInstancesResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeInstancesResponse(const DescribeInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancesResponse)
    Q_DISABLE_COPY(DescribeInstancesResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
