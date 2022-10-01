// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomaindeliverabilitycampaignresponse.h"
#include "getdomaindeliverabilitycampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetDomainDeliverabilityCampaignResponse
 * \brief The GetDomainDeliverabilityCampaignResponse class provides an interace for SESv2 GetDomainDeliverabilityCampaign responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::getDomainDeliverabilityCampaign
 */

/*!
 * Constructs a GetDomainDeliverabilityCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainDeliverabilityCampaignResponse::GetDomainDeliverabilityCampaignResponse(
        const GetDomainDeliverabilityCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetDomainDeliverabilityCampaignResponsePrivate(this), parent)
{
    setRequest(new GetDomainDeliverabilityCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainDeliverabilityCampaignRequest * GetDomainDeliverabilityCampaignResponse::request() const
{
    Q_D(const GetDomainDeliverabilityCampaignResponse);
    return static_cast<const GetDomainDeliverabilityCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetDomainDeliverabilityCampaign \a response.
 */
void GetDomainDeliverabilityCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainDeliverabilityCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetDomainDeliverabilityCampaignResponsePrivate
 * \brief The GetDomainDeliverabilityCampaignResponsePrivate class provides private implementation for GetDomainDeliverabilityCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetDomainDeliverabilityCampaignResponsePrivate object with public implementation \a q.
 */
GetDomainDeliverabilityCampaignResponsePrivate::GetDomainDeliverabilityCampaignResponsePrivate(
    GetDomainDeliverabilityCampaignResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetDomainDeliverabilityCampaign response element from \a xml.
 */
void GetDomainDeliverabilityCampaignResponsePrivate::parseGetDomainDeliverabilityCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainDeliverabilityCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
