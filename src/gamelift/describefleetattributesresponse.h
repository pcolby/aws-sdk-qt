// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETATTRIBUTESRESPONSE_H
#define QTAWS_DESCRIBEFLEETATTRIBUTESRESPONSE_H

#include "gameliftresponse.h"
#include "describefleetattributesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetAttributesResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetAttributesResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeFleetAttributesResponse(const DescribeFleetAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetAttributesResponse)
    Q_DISABLE_COPY(DescribeFleetAttributesResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
