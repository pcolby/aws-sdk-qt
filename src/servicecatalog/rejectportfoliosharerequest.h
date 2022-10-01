// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTPORTFOLIOSHAREREQUEST_H
#define QTAWS_REJECTPORTFOLIOSHAREREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class RejectPortfolioShareRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT RejectPortfolioShareRequest : public ServiceCatalogRequest {

public:
    RejectPortfolioShareRequest(const RejectPortfolioShareRequest &other);
    RejectPortfolioShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectPortfolioShareRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
