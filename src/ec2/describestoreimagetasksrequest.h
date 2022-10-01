// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTOREIMAGETASKSREQUEST_H
#define QTAWS_DESCRIBESTOREIMAGETASKSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeStoreImageTasksRequestPrivate;

class QTAWSEC2_EXPORT DescribeStoreImageTasksRequest : public Ec2Request {

public:
    DescribeStoreImageTasksRequest(const DescribeStoreImageTasksRequest &other);
    DescribeStoreImageTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStoreImageTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
