// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBNETGROUPSRESPONSE_H
#define QTAWS_DESCRIBESUBNETGROUPSRESPONSE_H

#include "daxresponse.h"
#include "describesubnetgroupsrequest.h"

namespace QtAws {
namespace Dax {

class DescribeSubnetGroupsResponsePrivate;

class QTAWSDAX_EXPORT DescribeSubnetGroupsResponse : public DaxResponse {
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

} // namespace Dax
} // namespace QtAws

#endif
