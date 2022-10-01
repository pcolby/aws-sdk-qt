// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORSESSIONSRESPONSE_H
#define QTAWS_DESCRIBETRAFFICMIRRORSESSIONSRESPONSE_H

#include "ec2response.h"
#include "describetrafficmirrorsessionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorSessionsResponsePrivate;

class QTAWSEC2_EXPORT DescribeTrafficMirrorSessionsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeTrafficMirrorSessionsResponse(const DescribeTrafficMirrorSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrafficMirrorSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrafficMirrorSessionsResponse)
    Q_DISABLE_COPY(DescribeTrafficMirrorSessionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
