// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDRESSREQUEST_H
#define QTAWS_DESCRIBEADDRESSREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class DescribeAddressRequestPrivate;

class QTAWSSNOWBALL_EXPORT DescribeAddressRequest : public SnowballRequest {

public:
    DescribeAddressRequest(const DescribeAddressRequest &other);
    DescribeAddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAddressRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
