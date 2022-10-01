// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTETABLESREQUEST_H
#define QTAWS_DESCRIBEROUTETABLESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeRouteTablesRequestPrivate;

class QTAWSEC2_EXPORT DescribeRouteTablesRequest : public Ec2Request {

public:
    DescribeRouteTablesRequest(const DescribeRouteTablesRequest &other);
    DescribeRouteTablesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRouteTablesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
