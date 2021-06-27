/*
    Copyright 2013-2021 Paul Colby

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

#include "getrecommenderconfigurationresponse.h"
#include "getrecommenderconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetRecommenderConfigurationResponse
 * \brief The GetRecommenderConfigurationResponse class provides an interace for Pinpoint GetRecommenderConfiguration responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getRecommenderConfiguration
 */

/*!
 * Constructs a GetRecommenderConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecommenderConfigurationResponse::GetRecommenderConfigurationResponse(
        const GetRecommenderConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetRecommenderConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetRecommenderConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecommenderConfigurationRequest * GetRecommenderConfigurationResponse::request() const
{
    return static_cast<const GetRecommenderConfigurationRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetRecommenderConfiguration \a response.
 */
void GetRecommenderConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecommenderConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetRecommenderConfigurationResponsePrivate
 * \brief The GetRecommenderConfigurationResponsePrivate class provides private implementation for GetRecommenderConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetRecommenderConfigurationResponsePrivate object with public implementation \a q.
 */
GetRecommenderConfigurationResponsePrivate::GetRecommenderConfigurationResponsePrivate(
    GetRecommenderConfigurationResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetRecommenderConfiguration response element from \a xml.
 */
void GetRecommenderConfigurationResponsePrivate::parseGetRecommenderConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecommenderConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
