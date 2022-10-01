// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTIMAGETASKSREQUEST_H
#define QTAWS_DESCRIBEEXPORTIMAGETASKSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeExportImageTasksRequestPrivate;

class QTAWSEC2_EXPORT DescribeExportImageTasksRequest : public Ec2Request {

public:
    DescribeExportImageTasksRequest(const DescribeExportImageTasksRequest &other);
    DescribeExportImageTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExportImageTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
