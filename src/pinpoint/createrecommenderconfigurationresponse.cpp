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

#include "createrecommenderconfigurationresponse.h"
#include "createrecommenderconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateRecommenderConfigurationResponse
 * \brief The CreateRecommenderConfigurationResponse class provides an interace for Pinpoint CreateRecommenderConfiguration responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createRecommenderConfiguration
 */

/*!
 * Constructs a CreateRecommenderConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRecommenderConfigurationResponse::CreateRecommenderConfigurationResponse(
        const CreateRecommenderConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateRecommenderConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateRecommenderConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRecommenderConfigurationRequest * CreateRecommenderConfigurationResponse::request() const
{
    Q_D(const CreateRecommenderConfigurationResponse);
    return static_cast<const CreateRecommenderConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateRecommenderConfiguration \a response.
 */
void CreateRecommenderConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRecommenderConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateRecommenderConfigurationResponsePrivate
 * \brief The CreateRecommenderConfigurationResponsePrivate class provides private implementation for CreateRecommenderConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateRecommenderConfigurationResponsePrivate object with public implementation \a q.
 */
CreateRecommenderConfigurationResponsePrivate::CreateRecommenderConfigurationResponsePrivate(
    CreateRecommenderConfigurationResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateRecommenderConfiguration response element from \a xml.
 */
void CreateRecommenderConfigurationResponsePrivate::parseCreateRecommenderConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRecommenderConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
