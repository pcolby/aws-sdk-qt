// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEATTRIBUTEGROUPRESPONSE_H
#define QTAWS_CREATEATTRIBUTEGROUPRESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "createattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class CreateAttributeGroupResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT CreateAttributeGroupResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    CreateAttributeGroupResponse(const CreateAttributeGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAttributeGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAttributeGroupResponse)
    Q_DISABLE_COPY(CreateAttributeGroupResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
