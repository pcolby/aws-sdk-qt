// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTSREQUEST_H
#define QTAWS_DESCRIBEPRODUCTSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeProductsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DescribeProductsRequest : public SecurityHubRequest {

public:
    DescribeProductsRequest(const DescribeProductsRequest &other);
    DescribeProductsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProductsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
