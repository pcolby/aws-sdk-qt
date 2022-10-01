// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATENETWORKSITERESPONSE_H
#define QTAWS_ACTIVATENETWORKSITERESPONSE_H

#include "privatenetworksresponse.h"
#include "activatenetworksiterequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ActivateNetworkSiteResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT ActivateNetworkSiteResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    ActivateNetworkSiteResponse(const ActivateNetworkSiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ActivateNetworkSiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateNetworkSiteResponse)
    Q_DISABLE_COPY(ActivateNetworkSiteResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
