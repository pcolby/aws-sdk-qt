// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETLOCATIONATTRIBUTESRESPONSE_H
#define QTAWS_DESCRIBEFLEETLOCATIONATTRIBUTESRESPONSE_H

#include "gameliftresponse.h"
#include "describefleetlocationattributesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetLocationAttributesResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetLocationAttributesResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeFleetLocationAttributesResponse(const DescribeFleetLocationAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetLocationAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetLocationAttributesResponse)
    Q_DISABLE_COPY(DescribeFleetLocationAttributesResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
