// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESREQUEST_H
#define QTAWS_DESCRIBEVOLUMESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumesRequestPrivate;

class QTAWSEC2_EXPORT DescribeVolumesRequest : public Ec2Request {

public:
    DescribeVolumesRequest(const DescribeVolumesRequest &other);
    DescribeVolumesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVolumesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
