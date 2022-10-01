// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERETURNSHIPPINGLABELREQUEST_H
#define QTAWS_DESCRIBERETURNSHIPPINGLABELREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class DescribeReturnShippingLabelRequestPrivate;

class QTAWSSNOWBALL_EXPORT DescribeReturnShippingLabelRequest : public SnowballRequest {

public:
    DescribeReturnShippingLabelRequest(const DescribeReturnShippingLabelRequest &other);
    DescribeReturnShippingLabelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReturnShippingLabelRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
