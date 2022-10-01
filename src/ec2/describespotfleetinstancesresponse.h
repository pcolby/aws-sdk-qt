// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTFLEETINSTANCESRESPONSE_H
#define QTAWS_DESCRIBESPOTFLEETINSTANCESRESPONSE_H

#include "ec2response.h"
#include "describespotfleetinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotFleetInstancesResponsePrivate;

class QTAWSEC2_EXPORT DescribeSpotFleetInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeSpotFleetInstancesResponse(const DescribeSpotFleetInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSpotFleetInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpotFleetInstancesResponse)
    Q_DISABLE_COPY(DescribeSpotFleetInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
