// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRODUCTREQUEST_H
#define QTAWS_DELETEPRODUCTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProductRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DeleteProductRequest : public ServiceCatalogRequest {

public:
    DeleteProductRequest(const DeleteProductRequest &other);
    DeleteProductRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
