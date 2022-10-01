// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORSESSIONSREQUEST_H
#define QTAWS_DESCRIBETRAFFICMIRRORSESSIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorSessionsRequestPrivate;

class QTAWSEC2_EXPORT DescribeTrafficMirrorSessionsRequest : public Ec2Request {

public:
    DescribeTrafficMirrorSessionsRequest(const DescribeTrafficMirrorSessionsRequest &other);
    DescribeTrafficMirrorSessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrafficMirrorSessionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
