// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBYOIPCIDRSREQUEST_H
#define QTAWS_DESCRIBEBYOIPCIDRSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeByoipCidrsRequestPrivate;

class QTAWSEC2_EXPORT DescribeByoipCidrsRequest : public Ec2Request {

public:
    DescribeByoipCidrsRequest(const DescribeByoipCidrsRequest &other);
    DescribeByoipCidrsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeByoipCidrsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
