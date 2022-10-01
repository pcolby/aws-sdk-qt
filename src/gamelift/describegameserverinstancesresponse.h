// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESERVERINSTANCESRESPONSE_H
#define QTAWS_DESCRIBEGAMESERVERINSTANCESRESPONSE_H

#include "gameliftresponse.h"
#include "describegameserverinstancesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameServerInstancesResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameServerInstancesResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeGameServerInstancesResponse(const DescribeGameServerInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGameServerInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameServerInstancesResponse)
    Q_DISABLE_COPY(DescribeGameServerInstancesResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
