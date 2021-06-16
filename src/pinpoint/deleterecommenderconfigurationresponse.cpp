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

#include "deleterecommenderconfigurationresponse.h"
#include "deleterecommenderconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteRecommenderConfigurationResponse
 * \brief The DeleteRecommenderConfigurationResponse class provides an interace for Pinpoint DeleteRecommenderConfiguration responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteRecommenderConfiguration
 */

/*!
 * Constructs a DeleteRecommenderConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecommenderConfigurationResponse::DeleteRecommenderConfigurationResponse(
        const DeleteRecommenderConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteRecommenderConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteRecommenderConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRecommenderConfigurationRequest * DeleteRecommenderConfigurationResponse::request() const
{
    Q_D(const DeleteRecommenderConfigurationResponse);
    return static_cast<const DeleteRecommenderConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteRecommenderConfiguration \a response.
 */
void DeleteRecommenderConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecommenderConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteRecommenderConfigurationResponsePrivate
 * \brief The DeleteRecommenderConfigurationResponsePrivate class provides private implementation for DeleteRecommenderConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteRecommenderConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteRecommenderConfigurationResponsePrivate::DeleteRecommenderConfigurationResponsePrivate(
    DeleteRecommenderConfigurationResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteRecommenderConfiguration response element from \a xml.
 */
void DeleteRecommenderConfigurationResponsePrivate::parseDeleteRecommenderConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecommenderConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
