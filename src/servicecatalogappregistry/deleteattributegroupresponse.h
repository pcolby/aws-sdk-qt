// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTRIBUTEGROUPRESPONSE_H
#define QTAWS_DELETEATTRIBUTEGROUPRESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "deleteattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DeleteAttributeGroupResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT DeleteAttributeGroupResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    DeleteAttributeGroupResponse(const DeleteAttributeGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAttributeGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAttributeGroupResponse)
    Q_DISABLE_COPY(DeleteAttributeGroupResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
