// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONVERSIONTASKSREQUEST_H
#define QTAWS_DESCRIBECONVERSIONTASKSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeConversionTasksRequestPrivate;

class QTAWSEC2_EXPORT DescribeConversionTasksRequest : public Ec2Request {

public:
    DescribeConversionTasksRequest(const DescribeConversionTasksRequest &other);
    DescribeConversionTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConversionTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
