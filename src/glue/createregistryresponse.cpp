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

#include "createregistryresponse.h"
#include "createregistryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateRegistryResponse
 * \brief The CreateRegistryResponse class provides an interace for Glue CreateRegistry responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createRegistry
 */

/*!
 * Constructs a CreateRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRegistryResponse::CreateRegistryResponse(
        const CreateRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateRegistryResponsePrivate(this), parent)
{
    setRequest(new CreateRegistryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRegistryRequest * CreateRegistryResponse::request() const
{
    Q_D(const CreateRegistryResponse);
    return static_cast<const CreateRegistryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateRegistry \a response.
 */
void CreateRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateRegistryResponsePrivate
 * \brief The CreateRegistryResponsePrivate class provides private implementation for CreateRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateRegistryResponsePrivate object with public implementation \a q.
 */
CreateRegistryResponsePrivate::CreateRegistryResponsePrivate(
    CreateRegistryResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateRegistry response element from \a xml.
 */
void CreateRegistryResponsePrivate::parseCreateRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
