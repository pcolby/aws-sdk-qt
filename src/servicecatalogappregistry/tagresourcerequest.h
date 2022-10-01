// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCEREQUEST_H
#define QTAWS_TAGRESOURCEREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class TagResourceRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT TagResourceRequest : public ServiceCatalogAppRegistryRequest {

public:
    TagResourceRequest(const TagResourceRequest &other);
    TagResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagResourceRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
