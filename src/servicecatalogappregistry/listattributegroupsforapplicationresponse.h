// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTEGROUPSFORAPPLICATIONRESPONSE_H
#define QTAWS_LISTATTRIBUTEGROUPSFORAPPLICATIONRESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "listattributegroupsforapplicationrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAttributeGroupsForApplicationResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ListAttributeGroupsForApplicationResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    ListAttributeGroupsForApplicationResponse(const ListAttributeGroupsForApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttributeGroupsForApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttributeGroupsForApplicationResponse)
    Q_DISABLE_COPY(ListAttributeGroupsForApplicationResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
