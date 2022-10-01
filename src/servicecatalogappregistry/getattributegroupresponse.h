// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTRIBUTEGROUPRESPONSE_H
#define QTAWS_GETATTRIBUTEGROUPRESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "getattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class GetAttributeGroupResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT GetAttributeGroupResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    GetAttributeGroupResponse(const GetAttributeGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAttributeGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAttributeGroupResponse)
    Q_DISABLE_COPY(GetAttributeGroupResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
