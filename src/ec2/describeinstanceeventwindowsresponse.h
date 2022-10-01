// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEEVENTWINDOWSRESPONSE_H
#define QTAWS_DESCRIBEINSTANCEEVENTWINDOWSRESPONSE_H

#include "ec2response.h"
#include "describeinstanceeventwindowsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceEventWindowsResponsePrivate;

class QTAWSEC2_EXPORT DescribeInstanceEventWindowsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeInstanceEventWindowsResponse(const DescribeInstanceEventWindowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceEventWindowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceEventWindowsResponse)
    Q_DISABLE_COPY(DescribeInstanceEventWindowsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
