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

#include "getunfilteredpartitionmetadataresponse.h"
#include "getunfilteredpartitionmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUnfilteredPartitionMetadataResponse
 * \brief The GetUnfilteredPartitionMetadataResponse class provides an interace for Glue GetUnfilteredPartitionMetadata responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUnfilteredPartitionMetadata
 */

/*!
 * Constructs a GetUnfilteredPartitionMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
GetUnfilteredPartitionMetadataResponse::GetUnfilteredPartitionMetadataResponse(
        const GetUnfilteredPartitionMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetUnfilteredPartitionMetadataResponsePrivate(this), parent)
{
    setRequest(new GetUnfilteredPartitionMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUnfilteredPartitionMetadataRequest * GetUnfilteredPartitionMetadataResponse::request() const
{
    Q_D(const GetUnfilteredPartitionMetadataResponse);
    return static_cast<const GetUnfilteredPartitionMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetUnfilteredPartitionMetadata \a response.
 */
void GetUnfilteredPartitionMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUnfilteredPartitionMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetUnfilteredPartitionMetadataResponsePrivate
 * \brief The GetUnfilteredPartitionMetadataResponsePrivate class provides private implementation for GetUnfilteredPartitionMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUnfilteredPartitionMetadataResponsePrivate object with public implementation \a q.
 */
GetUnfilteredPartitionMetadataResponsePrivate::GetUnfilteredPartitionMetadataResponsePrivate(
    GetUnfilteredPartitionMetadataResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetUnfilteredPartitionMetadata response element from \a xml.
 */
void GetUnfilteredPartitionMetadataResponsePrivate::parseGetUnfilteredPartitionMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUnfilteredPartitionMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
