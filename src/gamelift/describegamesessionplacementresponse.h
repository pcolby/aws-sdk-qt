// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONPLACEMENTRESPONSE_H
#define QTAWS_DESCRIBEGAMESESSIONPLACEMENTRESPONSE_H

#include "gameliftresponse.h"
#include "describegamesessionplacementrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionPlacementResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameSessionPlacementResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeGameSessionPlacementResponse(const DescribeGameSessionPlacementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGameSessionPlacementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameSessionPlacementResponse)
    Q_DISABLE_COPY(DescribeGameSessionPlacementResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
