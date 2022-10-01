// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKSITERESPONSE_H
#define QTAWS_CREATENETWORKSITERESPONSE_H

#include "privatenetworksresponse.h"
#include "createnetworksiterequest.h"

namespace QtAws {
namespace PrivateNetworks {

class CreateNetworkSiteResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT CreateNetworkSiteResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    CreateNetworkSiteResponse(const CreateNetworkSiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNetworkSiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkSiteResponse)
    Q_DISABLE_COPY(CreateNetworkSiteResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
