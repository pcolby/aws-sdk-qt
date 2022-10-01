// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNRESPONSE_H
#define QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNRESPONSE_H

#include "pinpointemailresponse.h"
#include "getdomaindeliverabilitycampaignrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDomainDeliverabilityCampaignResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDomainDeliverabilityCampaignResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    GetDomainDeliverabilityCampaignResponse(const GetDomainDeliverabilityCampaignRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDomainDeliverabilityCampaignRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainDeliverabilityCampaignResponse)
    Q_DISABLE_COPY(GetDomainDeliverabilityCampaignResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
