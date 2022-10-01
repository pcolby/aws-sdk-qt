// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBNETGROUPSREQUEST_H
#define QTAWS_DESCRIBESUBNETGROUPSREQUEST_H

#include "daxrequest.h"

namespace QtAws {
namespace Dax {

class DescribeSubnetGroupsRequestPrivate;

class QTAWSDAX_EXPORT DescribeSubnetGroupsRequest : public DaxRequest {

public:
    DescribeSubnetGroupsRequest(const DescribeSubnetGroupsRequest &other);
    DescribeSubnetGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubnetGroupsRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
