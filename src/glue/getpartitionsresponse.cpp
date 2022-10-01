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

#include "getpartitionsresponse.h"
#include "getpartitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPartitionsResponse
 * \brief The GetPartitionsResponse class provides an interace for Glue GetPartitions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getPartitions
 */

/*!
 * Constructs a GetPartitionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetPartitionsResponse::GetPartitionsResponse(
        const GetPartitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetPartitionsResponsePrivate(this), parent)
{
    setRequest(new GetPartitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPartitionsRequest * GetPartitionsResponse::request() const
{
    Q_D(const GetPartitionsResponse);
    return static_cast<const GetPartitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetPartitions \a response.
 */
void GetPartitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPartitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetPartitionsResponsePrivate
 * \brief The GetPartitionsResponsePrivate class provides private implementation for GetPartitionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetPartitionsResponsePrivate object with public implementation \a q.
 */
GetPartitionsResponsePrivate::GetPartitionsResponsePrivate(
    GetPartitionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetPartitions response element from \a xml.
 */
void GetPartitionsResponsePrivate::parseGetPartitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPartitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
