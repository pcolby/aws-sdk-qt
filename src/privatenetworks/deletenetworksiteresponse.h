// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKSITERESPONSE_H
#define QTAWS_DELETENETWORKSITERESPONSE_H

#include "privatenetworksresponse.h"
#include "deletenetworksiterequest.h"

namespace QtAws {
namespace PrivateNetworks {

class DeleteNetworkSiteResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT DeleteNetworkSiteResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    DeleteNetworkSiteResponse(const DeleteNetworkSiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkSiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkSiteResponse)
    Q_DISABLE_COPY(DeleteNetworkSiteResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
