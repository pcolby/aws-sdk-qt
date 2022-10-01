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

#include "getunfilteredtablemetadataresponse.h"
#include "getunfilteredtablemetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUnfilteredTableMetadataResponse
 * \brief The GetUnfilteredTableMetadataResponse class provides an interace for Glue GetUnfilteredTableMetadata responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUnfilteredTableMetadata
 */

/*!
 * Constructs a GetUnfilteredTableMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
GetUnfilteredTableMetadataResponse::GetUnfilteredTableMetadataResponse(
        const GetUnfilteredTableMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetUnfilteredTableMetadataResponsePrivate(this), parent)
{
    setRequest(new GetUnfilteredTableMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUnfilteredTableMetadataRequest * GetUnfilteredTableMetadataResponse::request() const
{
    Q_D(const GetUnfilteredTableMetadataResponse);
    return static_cast<const GetUnfilteredTableMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetUnfilteredTableMetadata \a response.
 */
void GetUnfilteredTableMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUnfilteredTableMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetUnfilteredTableMetadataResponsePrivate
 * \brief The GetUnfilteredTableMetadataResponsePrivate class provides private implementation for GetUnfilteredTableMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUnfilteredTableMetadataResponsePrivate object with public implementation \a q.
 */
GetUnfilteredTableMetadataResponsePrivate::GetUnfilteredTableMetadataResponsePrivate(
    GetUnfilteredTableMetadataResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetUnfilteredTableMetadata response element from \a xml.
 */
void GetUnfilteredTableMetadataResponsePrivate::parseGetUnfilteredTableMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUnfilteredTableMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
