// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSRESPONSE_H
#define QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSRESPONSE_H

#include "pinpointemailresponse.h"
#include "listdomaindeliverabilitycampaignsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class ListDomainDeliverabilityCampaignsResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT ListDomainDeliverabilityCampaignsResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    ListDomainDeliverabilityCampaignsResponse(const ListDomainDeliverabilityCampaignsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDomainDeliverabilityCampaignsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainDeliverabilityCampaignsResponse)
    Q_DISABLE_COPY(ListDomainDeliverabilityCampaignsResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
