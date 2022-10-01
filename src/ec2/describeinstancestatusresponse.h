// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESTATUSRESPONSE_H
#define QTAWS_DESCRIBEINSTANCESTATUSRESPONSE_H

#include "ec2response.h"
#include "describeinstancestatusrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceStatusResponsePrivate;

class QTAWSEC2_EXPORT DescribeInstanceStatusResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeInstanceStatusResponse(const DescribeInstanceStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceStatusResponse)
    Q_DISABLE_COPY(DescribeInstanceStatusResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
