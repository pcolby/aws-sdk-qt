// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEINSTANCEPROVISIONEDRESOURCESRESPONSE_H
#define QTAWS_LISTSERVICEINSTANCEPROVISIONEDRESOURCESRESPONSE_H

#include "protonresponse.h"
#include "listserviceinstanceprovisionedresourcesrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceInstanceProvisionedResourcesResponsePrivate;

class QTAWSPROTON_EXPORT ListServiceInstanceProvisionedResourcesResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListServiceInstanceProvisionedResourcesResponse(const ListServiceInstanceProvisionedResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServiceInstanceProvisionedResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceInstanceProvisionedResourcesResponse)
    Q_DISABLE_COPY(ListServiceInstanceProvisionedResourcesResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
