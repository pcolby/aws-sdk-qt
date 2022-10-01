// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESITERESPONSE_H
#define QTAWS_DELETESITERESPONSE_H

#include "networkmanagerresponse.h"
#include "deletesiterequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteSiteResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteSiteResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DeleteSiteResponse(const DeleteSiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSiteResponse)
    Q_DISABLE_COPY(DeleteSiteResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
