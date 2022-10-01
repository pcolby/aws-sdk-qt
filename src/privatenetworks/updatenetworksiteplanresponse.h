// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKSITEPLANRESPONSE_H
#define QTAWS_UPDATENETWORKSITEPLANRESPONSE_H

#include "privatenetworksresponse.h"
#include "updatenetworksiteplanrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class UpdateNetworkSitePlanResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT UpdateNetworkSitePlanResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    UpdateNetworkSitePlanResponse(const UpdateNetworkSitePlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNetworkSitePlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkSitePlanResponse)
    Q_DISABLE_COPY(UpdateNetworkSitePlanResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
