// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCHANGESETREQUEST_H
#define QTAWS_CANCELCHANGESETREQUEST_H

#include "marketplacecatalogrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class CancelChangeSetRequestPrivate;

class QTAWSMARKETPLACECATALOG_EXPORT CancelChangeSetRequest : public MarketplaceCatalogRequest {

public:
    CancelChangeSetRequest(const CancelChangeSetRequest &other);
    CancelChangeSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelChangeSetRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
