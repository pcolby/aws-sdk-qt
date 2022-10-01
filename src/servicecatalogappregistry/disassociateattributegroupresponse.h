// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEATTRIBUTEGROUPRESPONSE_H
#define QTAWS_DISASSOCIATEATTRIBUTEGROUPRESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "disassociateattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DisassociateAttributeGroupResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT DisassociateAttributeGroupResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    DisassociateAttributeGroupResponse(const DisassociateAttributeGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateAttributeGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAttributeGroupResponse)
    Q_DISABLE_COPY(DisassociateAttributeGroupResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
