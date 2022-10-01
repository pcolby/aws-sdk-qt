// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resumecampaignresponse.h"
#include "resumecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::ResumeCampaignResponse
 * \brief The ResumeCampaignResponse class provides an interace for ConnectCampaigns ResumeCampaign responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::resumeCampaign
 */

/*!
 * Constructs a ResumeCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
ResumeCampaignResponse::ResumeCampaignResponse(
        const ResumeCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new ResumeCampaignResponsePrivate(this), parent)
{
    setRequest(new ResumeCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResumeCampaignRequest * ResumeCampaignResponse::request() const
{
    Q_D(const ResumeCampaignResponse);
    return static_cast<const ResumeCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns ResumeCampaign \a response.
 */
void ResumeCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResumeCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::ResumeCampaignResponsePrivate
 * \brief The ResumeCampaignResponsePrivate class provides private implementation for ResumeCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a ResumeCampaignResponsePrivate object with public implementation \a q.
 */
ResumeCampaignResponsePrivate::ResumeCampaignResponsePrivate(
    ResumeCampaignResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns ResumeCampaign response element from \a xml.
 */
void ResumeCampaignResponsePrivate::parseResumeCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResumeCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
