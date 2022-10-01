// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSANALYSESREQUEST_H
#define QTAWS_DESCRIBENETWORKINSIGHTSANALYSESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsAnalysesRequestPrivate;

class QTAWSEC2_EXPORT DescribeNetworkInsightsAnalysesRequest : public Ec2Request {

public:
    DescribeNetworkInsightsAnalysesRequest(const DescribeNetworkInsightsAnalysesRequest &other);
    DescribeNetworkInsightsAnalysesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInsightsAnalysesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
