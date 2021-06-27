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

#include "creatediscovererresponse.h"
#include "creatediscovererresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::CreateDiscovererResponse
 * \brief The CreateDiscovererResponse class provides an interace for Schemas CreateDiscoverer responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::createDiscoverer
 */

/*!
 * Constructs a CreateDiscovererResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDiscovererResponse::CreateDiscovererResponse(
        const CreateDiscovererRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new CreateDiscovererResponsePrivate(this), parent)
{
    setRequest(new CreateDiscovererRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDiscovererRequest * CreateDiscovererResponse::request() const
{
    return static_cast<const CreateDiscovererRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas CreateDiscoverer \a response.
 */
void CreateDiscovererResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDiscovererResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::CreateDiscovererResponsePrivate
 * \brief The CreateDiscovererResponsePrivate class provides private implementation for CreateDiscovererResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a CreateDiscovererResponsePrivate object with public implementation \a q.
 */
CreateDiscovererResponsePrivate::CreateDiscovererResponsePrivate(
    CreateDiscovererResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas CreateDiscoverer response element from \a xml.
 */
void CreateDiscovererResponsePrivate::parseCreateDiscovererResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDiscovererResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
