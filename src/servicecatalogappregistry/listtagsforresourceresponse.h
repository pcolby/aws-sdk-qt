// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCERESPONSE_H
#define QTAWS_LISTTAGSFORRESOURCERESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "listtagsforresourcerequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListTagsForResourceResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ListTagsForResourceResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    ListTagsForResourceResponse(const ListTagsForResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsForResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForResourceResponse)
    Q_DISABLE_COPY(ListTagsForResourceResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
