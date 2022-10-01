// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTPROVISIONEDRESOURCESRESPONSE_H
#define QTAWS_LISTENVIRONMENTPROVISIONEDRESOURCESRESPONSE_H

#include "protonresponse.h"
#include "listenvironmentprovisionedresourcesrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentProvisionedResourcesResponsePrivate;

class QTAWSPROTON_EXPORT ListEnvironmentProvisionedResourcesResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListEnvironmentProvisionedResourcesResponse(const ListEnvironmentProvisionedResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEnvironmentProvisionedResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentProvisionedResourcesResponse)
    Q_DISABLE_COPY(ListEnvironmentProvisionedResourcesResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
