// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKSITERESPONSE_H
#define QTAWS_UPDATENETWORKSITERESPONSE_H

#include "privatenetworksresponse.h"
#include "updatenetworksiterequest.h"

namespace QtAws {
namespace PrivateNetworks {

class UpdateNetworkSiteResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT UpdateNetworkSiteResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    UpdateNetworkSiteResponse(const UpdateNetworkSiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNetworkSiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkSiteResponse)
    Q_DISABLE_COPY(UpdateNetworkSiteResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
