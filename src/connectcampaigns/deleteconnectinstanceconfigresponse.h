// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTINSTANCECONFIGRESPONSE_H
#define QTAWS_DELETECONNECTINSTANCECONFIGRESPONSE_H

#include "connectcampaignsresponse.h"
#include "deleteconnectinstanceconfigrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class DeleteConnectInstanceConfigResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT DeleteConnectInstanceConfigResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    DeleteConnectInstanceConfigResponse(const DeleteConnectInstanceConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConnectInstanceConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectInstanceConfigResponse)
    Q_DISABLE_COPY(DeleteConnectInstanceConfigResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
