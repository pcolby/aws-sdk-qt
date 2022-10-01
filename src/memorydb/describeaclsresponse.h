// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACLSRESPONSE_H
#define QTAWS_DESCRIBEACLSRESPONSE_H

#include "memorydbresponse.h"
#include "describeaclsrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeACLsResponsePrivate;

class QTAWSMEMORYDB_EXPORT DescribeACLsResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    DescribeACLsResponse(const DescribeACLsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeACLsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeACLsResponse)
    Q_DISABLE_COPY(DescribeACLsResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
