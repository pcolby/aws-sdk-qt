// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORTARGETSRESPONSE_H
#define QTAWS_DESCRIBETRAFFICMIRRORTARGETSRESPONSE_H

#include "ec2response.h"
#include "describetrafficmirrortargetsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorTargetsResponsePrivate;

class QTAWSEC2_EXPORT DescribeTrafficMirrorTargetsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeTrafficMirrorTargetsResponse(const DescribeTrafficMirrorTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrafficMirrorTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrafficMirrorTargetsResponse)
    Q_DISABLE_COPY(DescribeTrafficMirrorTargetsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
