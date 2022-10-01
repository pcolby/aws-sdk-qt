// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETINSTANCESRESPONSE_H
#define QTAWS_DESCRIBEFLEETINSTANCESRESPONSE_H

#include "ec2response.h"
#include "describefleetinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeFleetInstancesResponsePrivate;

class QTAWSEC2_EXPORT DescribeFleetInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeFleetInstancesResponse(const DescribeFleetInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetInstancesResponse)
    Q_DISABLE_COPY(DescribeFleetInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
