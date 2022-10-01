// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSUBNETGROUPSREQUEST_H
#define QTAWS_DESCRIBEDBSUBNETGROUPSREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBSubnetGroupsRequestPrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBSubnetGroupsRequest : public NeptuneRequest {

public:
    DescribeDBSubnetGroupsRequest(const DescribeDBSubnetGroupsRequest &other);
    DescribeDBSubnetGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBSubnetGroupsRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
