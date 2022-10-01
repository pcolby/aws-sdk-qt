// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACLSREQUEST_H
#define QTAWS_DESCRIBEACLSREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeACLsRequestPrivate;

class QTAWSMEMORYDB_EXPORT DescribeACLsRequest : public MemoryDbRequest {

public:
    DescribeACLsRequest(const DescribeACLsRequest &other);
    DescribeACLsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeACLsRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
