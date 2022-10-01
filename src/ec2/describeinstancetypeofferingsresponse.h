// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPEOFFERINGSRESPONSE_H
#define QTAWS_DESCRIBEINSTANCETYPEOFFERINGSRESPONSE_H

#include "ec2response.h"
#include "describeinstancetypeofferingsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceTypeOfferingsResponsePrivate;

class QTAWSEC2_EXPORT DescribeInstanceTypeOfferingsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeInstanceTypeOfferingsResponse(const DescribeInstanceTypeOfferingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceTypeOfferingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceTypeOfferingsResponse)
    Q_DISABLE_COPY(DescribeInstanceTypeOfferingsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
