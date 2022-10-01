// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTIMAGETASKSREQUEST_H
#define QTAWS_DESCRIBEIMPORTIMAGETASKSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeImportImageTasksRequestPrivate;

class QTAWSEC2_EXPORT DescribeImportImageTasksRequest : public Ec2Request {

public:
    DescribeImportImageTasksRequest(const DescribeImportImageTasksRequest &other);
    DescribeImportImageTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImportImageTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
