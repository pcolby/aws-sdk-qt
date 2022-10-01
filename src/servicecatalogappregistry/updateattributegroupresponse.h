// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEATTRIBUTEGROUPRESPONSE_H
#define QTAWS_UPDATEATTRIBUTEGROUPRESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "updateattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class UpdateAttributeGroupResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT UpdateAttributeGroupResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    UpdateAttributeGroupResponse(const UpdateAttributeGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAttributeGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAttributeGroupResponse)
    Q_DISABLE_COPY(UpdateAttributeGroupResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
