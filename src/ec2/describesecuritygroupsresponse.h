// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPSRESPONSE_H
#define QTAWS_DESCRIBESECURITYGROUPSRESPONSE_H

#include "ec2response.h"
#include "describesecuritygroupsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupsResponsePrivate;

class QTAWSEC2_EXPORT DescribeSecurityGroupsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeSecurityGroupsResponse(const DescribeSecurityGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSecurityGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeSecurityGroupsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
