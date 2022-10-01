// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTVIEWREQUEST_H
#define QTAWS_DESCRIBEPRODUCTVIEWREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProductViewRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeProductViewRequest : public ServiceCatalogRequest {

public:
    DescribeProductViewRequest(const DescribeProductViewRequest &other);
    DescribeProductViewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProductViewRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
