// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONDETAILSRESPONSE_H
#define QTAWS_DESCRIBEGAMESESSIONDETAILSRESPONSE_H

#include "gameliftresponse.h"
#include "describegamesessiondetailsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionDetailsResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameSessionDetailsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeGameSessionDetailsResponse(const DescribeGameSessionDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGameSessionDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameSessionDetailsResponse)
    Q_DISABLE_COPY(DescribeGameSessionDetailsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
