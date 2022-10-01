// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBINSTANCESREQUEST_H
#define QTAWS_DESCRIBEDBINSTANCESREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBInstancesRequestPrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBInstancesRequest : public NeptuneRequest {

public:
    DescribeDBInstancesRequest(const DescribeDBInstancesRequest &other);
    DescribeDBInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBInstancesRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
