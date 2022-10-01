// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPESREQUEST_H
#define QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsAccessScopesRequestPrivate;

class QTAWSEC2_EXPORT DescribeNetworkInsightsAccessScopesRequest : public Ec2Request {

public:
    DescribeNetworkInsightsAccessScopesRequest(const DescribeNetworkInsightsAccessScopesRequest &other);
    DescribeNetworkInsightsAccessScopesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInsightsAccessScopesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
