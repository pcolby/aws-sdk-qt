// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCAMPAIGNSRESPONSE_H
#define QTAWS_LISTCAMPAIGNSRESPONSE_H

#include "connectcampaignsresponse.h"
#include "listcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class ListCampaignsResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT ListCampaignsResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    ListCampaignsResponse(const ListCampaignsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCampaignsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCampaignsResponse)
    Q_DISABLE_COPY(ListCampaignsResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
