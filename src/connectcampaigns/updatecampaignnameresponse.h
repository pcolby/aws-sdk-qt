// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNNAMERESPONSE_H
#define QTAWS_UPDATECAMPAIGNNAMERESPONSE_H

#include "connectcampaignsresponse.h"
#include "updatecampaignnamerequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignNameResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT UpdateCampaignNameResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    UpdateCampaignNameResponse(const UpdateCampaignNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCampaignNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCampaignNameResponse)
    Q_DISABLE_COPY(UpdateCampaignNameResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
