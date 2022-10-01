// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOIPPOOLSRESPONSE_H
#define QTAWS_DESCRIBECOIPPOOLSRESPONSE_H

#include "ec2response.h"
#include "describecoippoolsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeCoipPoolsResponsePrivate;

class QTAWSEC2_EXPORT DescribeCoipPoolsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeCoipPoolsResponse(const DescribeCoipPoolsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCoipPoolsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCoipPoolsResponse)
    Q_DISABLE_COPY(DescribeCoipPoolsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
