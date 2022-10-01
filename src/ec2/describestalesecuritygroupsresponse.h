// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTALESECURITYGROUPSRESPONSE_H
#define QTAWS_DESCRIBESTALESECURITYGROUPSRESPONSE_H

#include "ec2response.h"
#include "describestalesecuritygroupsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeStaleSecurityGroupsResponsePrivate;

class QTAWSEC2_EXPORT DescribeStaleSecurityGroupsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeStaleSecurityGroupsResponse(const DescribeStaleSecurityGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStaleSecurityGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStaleSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeStaleSecurityGroupsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
