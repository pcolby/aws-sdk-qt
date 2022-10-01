// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTINSTANCEREQUESTSRESPONSE_H
#define QTAWS_DESCRIBESPOTINSTANCEREQUESTSRESPONSE_H

#include "ec2response.h"
#include "describespotinstancerequestsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotInstanceRequestsResponsePrivate;

class QTAWSEC2_EXPORT DescribeSpotInstanceRequestsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeSpotInstanceRequestsResponse(const DescribeSpotInstanceRequestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSpotInstanceRequestsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpotInstanceRequestsResponse)
    Q_DISABLE_COPY(DescribeSpotInstanceRequestsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
