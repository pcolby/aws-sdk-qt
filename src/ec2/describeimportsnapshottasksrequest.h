// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTSNAPSHOTTASKSREQUEST_H
#define QTAWS_DESCRIBEIMPORTSNAPSHOTTASKSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeImportSnapshotTasksRequestPrivate;

class QTAWSEC2_EXPORT DescribeImportSnapshotTasksRequest : public Ec2Request {

public:
    DescribeImportSnapshotTasksRequest(const DescribeImportSnapshotTasksRequest &other);
    DescribeImportSnapshotTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImportSnapshotTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
