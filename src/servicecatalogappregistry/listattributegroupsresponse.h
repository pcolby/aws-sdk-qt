// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTEGROUPSRESPONSE_H
#define QTAWS_LISTATTRIBUTEGROUPSRESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "listattributegroupsrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAttributeGroupsResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ListAttributeGroupsResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    ListAttributeGroupsResponse(const ListAttributeGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttributeGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttributeGroupsResponse)
    Q_DISABLE_COPY(ListAttributeGroupsResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
