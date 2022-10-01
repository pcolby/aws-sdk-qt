// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDATTRIBUTEGROUPSRESPONSE_H
#define QTAWS_LISTASSOCIATEDATTRIBUTEGROUPSRESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "listassociatedattributegroupsrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAssociatedAttributeGroupsResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ListAssociatedAttributeGroupsResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    ListAssociatedAttributeGroupsResponse(const ListAssociatedAttributeGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssociatedAttributeGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedAttributeGroupsResponse)
    Q_DISABLE_COPY(ListAssociatedAttributeGroupsResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
