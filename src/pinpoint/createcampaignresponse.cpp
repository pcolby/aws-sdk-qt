/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createcampaignresponse.h"
#include "createcampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateCampaignResponse
 * \brief The CreateCampaignResponse class provides an interace for Pinpoint CreateCampaign responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createCampaign
 */

/*!
 * Constructs a CreateCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCampaignResponse::CreateCampaignResponse(
        const CreateCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateCampaignResponsePrivate(this), parent)
{
    setRequest(new CreateCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCampaignRequest * CreateCampaignResponse::request() const
{
    Q_D(const CreateCampaignResponse);
    return static_cast<const CreateCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateCampaign \a response.
 */
void CreateCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateCampaignResponsePrivate
 * \brief The CreateCampaignResponsePrivate class provides private implementation for CreateCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateCampaignResponsePrivate object with public implementation \a q.
 */
CreateCampaignResponsePrivate::CreateCampaignResponsePrivate(
    CreateCampaignResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateCampaign response element from \a xml.
 */
void CreateCampaignResponsePrivate::parseCreateCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
