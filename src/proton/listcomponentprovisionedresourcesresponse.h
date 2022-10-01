// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTPROVISIONEDRESOURCESRESPONSE_H
#define QTAWS_LISTCOMPONENTPROVISIONEDRESOURCESRESPONSE_H

#include "protonresponse.h"
#include "listcomponentprovisionedresourcesrequest.h"

namespace QtAws {
namespace Proton {

class ListComponentProvisionedResourcesResponsePrivate;

class QTAWSPROTON_EXPORT ListComponentProvisionedResourcesResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListComponentProvisionedResourcesResponse(const ListComponentProvisionedResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListComponentProvisionedResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentProvisionedResourcesResponse)
    Q_DISABLE_COPY(ListComponentProvisionedResourcesResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
