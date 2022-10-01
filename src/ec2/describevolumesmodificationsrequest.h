// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESMODIFICATIONSREQUEST_H
#define QTAWS_DESCRIBEVOLUMESMODIFICATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumesModificationsRequestPrivate;

class QTAWSEC2_EXPORT DescribeVolumesModificationsRequest : public Ec2Request {

public:
    DescribeVolumesModificationsRequest(const DescribeVolumesModificationsRequest &other);
    DescribeVolumesModificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVolumesModificationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
