// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBNETGROUPSRESPONSE_H
#define QTAWS_DESCRIBESUBNETGROUPSRESPONSE_H

#include "memorydbresponse.h"
#include "describesubnetgroupsrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeSubnetGroupsResponsePrivate;

class QTAWSMEMORYDB_EXPORT DescribeSubnetGroupsResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    DescribeSubnetGroupsResponse(const DescribeSubnetGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSubnetGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubnetGroupsResponse)
    Q_DISABLE_COPY(DescribeSubnetGroupsResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
