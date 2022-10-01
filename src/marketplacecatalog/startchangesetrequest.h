// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHANGESETREQUEST_H
#define QTAWS_STARTCHANGESETREQUEST_H

#include "marketplacecatalogrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class StartChangeSetRequestPrivate;

class QTAWSMARKETPLACECATALOG_EXPORT StartChangeSetRequest : public MarketplaceCatalogRequest {

public:
    StartChangeSetRequest(const StartChangeSetRequest &other);
    StartChangeSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartChangeSetRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
