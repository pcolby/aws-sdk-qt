// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATEIDFORMATREQUEST_H
#define QTAWS_DESCRIBEAGGREGATEIDFORMATREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeAggregateIdFormatRequestPrivate;

class QTAWSEC2_EXPORT DescribeAggregateIdFormatRequest : public Ec2Request {

public:
    DescribeAggregateIdFormatRequest(const DescribeAggregateIdFormatRequest &other);
    DescribeAggregateIdFormatRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAggregateIdFormatRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
