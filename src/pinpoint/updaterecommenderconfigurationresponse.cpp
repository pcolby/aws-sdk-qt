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

#include "updaterecommenderconfigurationresponse.h"
#include "updaterecommenderconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateRecommenderConfigurationResponse
 * \brief The UpdateRecommenderConfigurationResponse class provides an interace for Pinpoint UpdateRecommenderConfiguration responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateRecommenderConfiguration
 */

/*!
 * Constructs a UpdateRecommenderConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRecommenderConfigurationResponse::UpdateRecommenderConfigurationResponse(
        const UpdateRecommenderConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateRecommenderConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateRecommenderConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRecommenderConfigurationRequest * UpdateRecommenderConfigurationResponse::request() const
{
    return static_cast<const UpdateRecommenderConfigurationRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateRecommenderConfiguration \a response.
 */
void UpdateRecommenderConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRecommenderConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateRecommenderConfigurationResponsePrivate
 * \brief The UpdateRecommenderConfigurationResponsePrivate class provides private implementation for UpdateRecommenderConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateRecommenderConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateRecommenderConfigurationResponsePrivate::UpdateRecommenderConfigurationResponsePrivate(
    UpdateRecommenderConfigurationResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateRecommenderConfiguration response element from \a xml.
 */
void UpdateRecommenderConfigurationResponsePrivate::parseUpdateRecommenderConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRecommenderConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
