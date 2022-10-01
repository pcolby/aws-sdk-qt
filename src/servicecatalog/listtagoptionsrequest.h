// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGOPTIONSREQUEST_H
#define QTAWS_LISTTAGOPTIONSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListTagOptionsRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListTagOptionsRequest : public ServiceCatalogRequest {

public:
    ListTagOptionsRequest(const ListTagOptionsRequest &other);
    ListTagOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagOptionsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
