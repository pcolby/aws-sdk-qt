// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKACLSRESPONSE_H
#define QTAWS_DESCRIBENETWORKACLSRESPONSE_H

#include "ec2response.h"
#include "describenetworkaclsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkAclsResponsePrivate;

class QTAWSEC2_EXPORT DescribeNetworkAclsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeNetworkAclsResponse(const DescribeNetworkAclsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNetworkAclsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkAclsResponse)
    Q_DISABLE_COPY(DescribeNetworkAclsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
