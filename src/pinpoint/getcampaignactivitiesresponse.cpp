// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignactivitiesresponse.h"
#include "getcampaignactivitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignActivitiesResponse
 * \brief The GetCampaignActivitiesResponse class provides an interace for Pinpoint GetCampaignActivities responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaignActivities
 */

/*!
 * Constructs a GetCampaignActivitiesResponse object for \a reply to \a request, with parent \a parent.
 */
GetCampaignActivitiesResponse::GetCampaignActivitiesResponse(
        const GetCampaignActivitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignActivitiesResponsePrivate(this), parent)
{
    setRequest(new GetCampaignActivitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCampaignActivitiesRequest * GetCampaignActivitiesResponse::request() const
{
    Q_D(const GetCampaignActivitiesResponse);
    return static_cast<const GetCampaignActivitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetCampaignActivities \a response.
 */
void GetCampaignActivitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCampaignActivitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetCampaignActivitiesResponsePrivate
 * \brief The GetCampaignActivitiesResponsePrivate class provides private implementation for GetCampaignActivitiesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignActivitiesResponsePrivate object with public implementation \a q.
 */
GetCampaignActivitiesResponsePrivate::GetCampaignActivitiesResponsePrivate(
    GetCampaignActivitiesResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetCampaignActivities response element from \a xml.
 */
void GetCampaignActivitiesResponsePrivate::parseGetCampaignActivitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignActivitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
