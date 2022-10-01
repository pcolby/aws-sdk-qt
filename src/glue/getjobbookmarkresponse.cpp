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

#include "getjobbookmarkresponse.h"
#include "getjobbookmarkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobBookmarkResponse
 * \brief The GetJobBookmarkResponse class provides an interace for Glue GetJobBookmark responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getJobBookmark
 */

/*!
 * Constructs a GetJobBookmarkResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobBookmarkResponse::GetJobBookmarkResponse(
        const GetJobBookmarkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobBookmarkResponsePrivate(this), parent)
{
    setRequest(new GetJobBookmarkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobBookmarkRequest * GetJobBookmarkResponse::request() const
{
    Q_D(const GetJobBookmarkResponse);
    return static_cast<const GetJobBookmarkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetJobBookmark \a response.
 */
void GetJobBookmarkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobBookmarkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetJobBookmarkResponsePrivate
 * \brief The GetJobBookmarkResponsePrivate class provides private implementation for GetJobBookmarkResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobBookmarkResponsePrivate object with public implementation \a q.
 */
GetJobBookmarkResponsePrivate::GetJobBookmarkResponsePrivate(
    GetJobBookmarkResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetJobBookmark response element from \a xml.
 */
void GetJobBookmarkResponsePrivate::parseGetJobBookmarkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobBookmarkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
