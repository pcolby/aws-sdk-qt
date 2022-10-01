// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANGESETREQUEST_H
#define QTAWS_DESCRIBECHANGESETREQUEST_H

#include "marketplacecatalogrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class DescribeChangeSetRequestPrivate;

class QTAWSMARKETPLACECATALOG_EXPORT DescribeChangeSetRequest : public MarketplaceCatalogRequest {

public:
    DescribeChangeSetRequest(const DescribeChangeSetRequest &other);
    DescribeChangeSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChangeSetRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
