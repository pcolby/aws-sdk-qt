// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTATTRIBUTEREQUEST_H
#define QTAWS_DESCRIBESNAPSHOTATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSnapshotAttributeRequestPrivate;

class QTAWSEC2_EXPORT DescribeSnapshotAttributeRequest : public Ec2Request {

public:
    DescribeSnapshotAttributeRequest(const DescribeSnapshotAttributeRequest &other);
    DescribeSnapshotAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
