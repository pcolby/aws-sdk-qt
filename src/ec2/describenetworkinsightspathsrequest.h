// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSPATHSREQUEST_H
#define QTAWS_DESCRIBENETWORKINSIGHTSPATHSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsPathsRequestPrivate;

class QTAWSEC2_EXPORT DescribeNetworkInsightsPathsRequest : public Ec2Request {

public:
    DescribeNetworkInsightsPathsRequest(const DescribeNetworkInsightsPathsRequest &other);
    DescribeNetworkInsightsPathsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInsightsPathsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
