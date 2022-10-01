// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEATTRIBUTEGROUPRESPONSE_H
#define QTAWS_ASSOCIATEATTRIBUTEGROUPRESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "associateattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class AssociateAttributeGroupResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT AssociateAttributeGroupResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    AssociateAttributeGroupResponse(const AssociateAttributeGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateAttributeGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAttributeGroupResponse)
    Q_DISABLE_COPY(AssociateAttributeGroupResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
