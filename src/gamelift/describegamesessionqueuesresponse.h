// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONQUEUESRESPONSE_H
#define QTAWS_DESCRIBEGAMESESSIONQUEUESRESPONSE_H

#include "gameliftresponse.h"
#include "describegamesessionqueuesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionQueuesResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameSessionQueuesResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeGameSessionQueuesResponse(const DescribeGameSessionQueuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGameSessionQueuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameSessionQueuesResponse)
    Q_DISABLE_COPY(DescribeGameSessionQueuesResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
