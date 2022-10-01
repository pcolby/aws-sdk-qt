// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTTIERSTATUSREQUEST_H
#define QTAWS_DESCRIBESNAPSHOTTIERSTATUSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSnapshotTierStatusRequestPrivate;

class QTAWSEC2_EXPORT DescribeSnapshotTierStatusRequest : public Ec2Request {

public:
    DescribeSnapshotTierStatusRequest(const DescribeSnapshotTierStatusRequest &other);
    DescribeSnapshotTierStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotTierStatusRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
