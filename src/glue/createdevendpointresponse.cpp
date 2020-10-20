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

#include "createdevendpointresponse.h"
#include "createdevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateDevEndpointResponse
 * \brief The CreateDevEndpointResponse class provides an interace for Glue CreateDevEndpoint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createDevEndpoint
 */

/*!
 * Constructs a CreateDevEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDevEndpointResponse::CreateDevEndpointResponse(
        const CreateDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateDevEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateDevEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDevEndpointRequest * CreateDevEndpointResponse::request() const
{
    Q_D(const CreateDevEndpointResponse);
    return static_cast<const CreateDevEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateDevEndpoint \a response.
 */
void CreateDevEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDevEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateDevEndpointResponsePrivate
 * \brief The CreateDevEndpointResponsePrivate class provides private implementation for CreateDevEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateDevEndpointResponsePrivate object with public implementation \a q.
 */
CreateDevEndpointResponsePrivate::CreateDevEndpointResponsePrivate(
    CreateDevEndpointResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateDevEndpoint response element from \a xml.
 */
void CreateDevEndpointResponsePrivate::parseCreateDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDevEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
