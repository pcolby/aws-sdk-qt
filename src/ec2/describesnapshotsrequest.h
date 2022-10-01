// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSREQUEST_H
#define QTAWS_DESCRIBESNAPSHOTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSnapshotsRequestPrivate;

class QTAWSEC2_EXPORT DescribeSnapshotsRequest : public Ec2Request {

public:
    DescribeSnapshotsRequest(const DescribeSnapshotsRequest &other);
    DescribeSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
