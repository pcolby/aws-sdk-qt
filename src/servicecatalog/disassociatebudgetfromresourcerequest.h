// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEBUDGETFROMRESOURCEREQUEST_H
#define QTAWS_DISASSOCIATEBUDGETFROMRESOURCEREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateBudgetFromResourceRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DisassociateBudgetFromResourceRequest : public ServiceCatalogRequest {

public:
    DisassociateBudgetFromResourceRequest(const DisassociateBudgetFromResourceRequest &other);
    DisassociateBudgetFromResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateBudgetFromResourceRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
