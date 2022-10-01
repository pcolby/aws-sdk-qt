// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITERESPONSE_H
#define QTAWS_UPDATESITERESPONSE_H

#include "networkmanagerresponse.h"
#include "updatesiterequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateSiteResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT UpdateSiteResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    UpdateSiteResponse(const UpdateSiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSiteResponse)
    Q_DISABLE_COPY(UpdateSiteResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
