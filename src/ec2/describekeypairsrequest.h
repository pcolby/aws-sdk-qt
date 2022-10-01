// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYPAIRSREQUEST_H
#define QTAWS_DESCRIBEKEYPAIRSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeKeyPairsRequestPrivate;

class QTAWSEC2_EXPORT DescribeKeyPairsRequest : public Ec2Request {

public:
    DescribeKeyPairsRequest(const DescribeKeyPairsRequest &other);
    DescribeKeyPairsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeKeyPairsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
