// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERSREQUEST_H
#define QTAWS_DESCRIBEUSERSREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeUsersRequestPrivate;

class QTAWSMEMORYDB_EXPORT DescribeUsersRequest : public MemoryDbRequest {

public:
    DescribeUsersRequest(const DescribeUsersRequest &other);
    DescribeUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUsersRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
