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

#include "getregistryresponse.h"
#include "getregistryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetRegistryResponse
 * \brief The GetRegistryResponse class provides an interace for Glue GetRegistry responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getRegistry
 */

/*!
 * Constructs a GetRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
GetRegistryResponse::GetRegistryResponse(
        const GetRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetRegistryResponsePrivate(this), parent)
{
    setRequest(new GetRegistryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRegistryRequest * GetRegistryResponse::request() const
{
    return static_cast<const GetRegistryRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue GetRegistry \a response.
 */
void GetRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetRegistryResponsePrivate
 * \brief The GetRegistryResponsePrivate class provides private implementation for GetRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetRegistryResponsePrivate object with public implementation \a q.
 */
GetRegistryResponsePrivate::GetRegistryResponsePrivate(
    GetRegistryResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetRegistry response element from \a xml.
 */
void GetRegistryResponsePrivate::parseGetRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
