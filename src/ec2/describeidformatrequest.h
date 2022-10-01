// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDFORMATREQUEST_H
#define QTAWS_DESCRIBEIDFORMATREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeIdFormatRequestPrivate;

class QTAWSEC2_EXPORT DescribeIdFormatRequest : public Ec2Request {

public:
    DescribeIdFormatRequest(const DescribeIdFormatRequest &other);
    DescribeIdFormatRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdFormatRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
