// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARAMETERGROUPSREQUEST_H
#define QTAWS_DESCRIBEPARAMETERGROUPSREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeParameterGroupsRequestPrivate;

class QTAWSMEMORYDB_EXPORT DescribeParameterGroupsRequest : public MemoryDbRequest {

public:
    DescribeParameterGroupsRequest(const DescribeParameterGroupsRequest &other);
    DescribeParameterGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeParameterGroupsRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
