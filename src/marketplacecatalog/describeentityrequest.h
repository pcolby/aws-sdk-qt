// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITYREQUEST_H
#define QTAWS_DESCRIBEENTITYREQUEST_H

#include "marketplacecatalogrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class DescribeEntityRequestPrivate;

class QTAWSMARKETPLACECATALOG_EXPORT DescribeEntityRequest : public MarketplaceCatalogRequest {

public:
    DescribeEntityRequest(const DescribeEntityRequest &other);
    DescribeEntityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEntityRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
