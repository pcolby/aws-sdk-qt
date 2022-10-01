// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESERVERRESPONSE_H
#define QTAWS_DESCRIBEGAMESERVERRESPONSE_H

#include "gameliftresponse.h"
#include "describegameserverrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameServerResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameServerResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeGameServerResponse(const DescribeGameServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGameServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameServerResponse)
    Q_DISABLE_COPY(DescribeGameServerResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
