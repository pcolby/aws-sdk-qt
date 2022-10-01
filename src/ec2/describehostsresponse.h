// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTSRESPONSE_H
#define QTAWS_DESCRIBEHOSTSRESPONSE_H

#include "ec2response.h"
#include "describehostsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeHostsResponsePrivate;

class QTAWSEC2_EXPORT DescribeHostsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeHostsResponse(const DescribeHostsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHostsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHostsResponse)
    Q_DISABLE_COPY(DescribeHostsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
