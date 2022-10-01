// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTFLEETREQUESTSRESPONSE_H
#define QTAWS_DESCRIBESPOTFLEETREQUESTSRESPONSE_H

#include "ec2response.h"
#include "describespotfleetrequestsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotFleetRequestsResponsePrivate;

class QTAWSEC2_EXPORT DescribeSpotFleetRequestsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeSpotFleetRequestsResponse(const DescribeSpotFleetRequestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSpotFleetRequestsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpotFleetRequestsResponse)
    Q_DISABLE_COPY(DescribeSpotFleetRequestsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
