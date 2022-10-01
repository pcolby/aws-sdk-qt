// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEACTIONSREQUEST_H
#define QTAWS_LISTSERVICEACTIONSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListServiceActionsRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListServiceActionsRequest : public ServiceCatalogRequest {

public:
    ListServiceActionsRequest(const ListServiceActionsRequest &other);
    ListServiceActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceActionsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
