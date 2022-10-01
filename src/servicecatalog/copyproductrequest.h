// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYPRODUCTREQUEST_H
#define QTAWS_COPYPRODUCTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CopyProductRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT CopyProductRequest : public ServiceCatalogRequest {

public:
    CopyProductRequest(const CopyProductRequest &other);
    CopyProductRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
