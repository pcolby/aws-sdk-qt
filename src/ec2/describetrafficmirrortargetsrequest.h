// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORTARGETSREQUEST_H
#define QTAWS_DESCRIBETRAFFICMIRRORTARGETSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorTargetsRequestPrivate;

class QTAWSEC2_EXPORT DescribeTrafficMirrorTargetsRequest : public Ec2Request {

public:
    DescribeTrafficMirrorTargetsRequest(const DescribeTrafficMirrorTargetsRequest &other);
    DescribeTrafficMirrorTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrafficMirrorTargetsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
