// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSRESPONSE_H
#define QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSRESPONSE_H

#include "sesv2response.h"
#include "listdomaindeliverabilitycampaignsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListDomainDeliverabilityCampaignsResponsePrivate;

class QTAWSSESV2_EXPORT ListDomainDeliverabilityCampaignsResponse : public SESv2Response {
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

} // namespace SESv2
} // namespace QtAws

#endif
