// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGSREQUEST_H
#define QTAWS_DESCRIBETAGSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTagsRequestPrivate;

class QTAWSEC2_EXPORT DescribeTagsRequest : public Ec2Request {

public:
    DescribeTagsRequest(const DescribeTagsRequest &other);
    DescribeTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTagsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
