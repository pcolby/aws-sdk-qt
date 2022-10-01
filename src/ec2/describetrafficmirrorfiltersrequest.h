// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORFILTERSREQUEST_H
#define QTAWS_DESCRIBETRAFFICMIRRORFILTERSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorFiltersRequestPrivate;

class QTAWSEC2_EXPORT DescribeTrafficMirrorFiltersRequest : public Ec2Request {

public:
    DescribeTrafficMirrorFiltersRequest(const DescribeTrafficMirrorFiltersRequest &other);
    DescribeTrafficMirrorFiltersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrafficMirrorFiltersRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
