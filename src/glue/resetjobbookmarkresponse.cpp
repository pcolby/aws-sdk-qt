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

#include "resetjobbookmarkresponse.h"
#include "resetjobbookmarkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ResetJobBookmarkResponse
 * \brief The ResetJobBookmarkResponse class provides an interace for Glue ResetJobBookmark responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::resetJobBookmark
 */

/*!
 * Constructs a ResetJobBookmarkResponse object for \a reply to \a request, with parent \a parent.
 */
ResetJobBookmarkResponse::ResetJobBookmarkResponse(
        const ResetJobBookmarkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ResetJobBookmarkResponsePrivate(this), parent)
{
    setRequest(new ResetJobBookmarkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetJobBookmarkRequest * ResetJobBookmarkResponse::request() const
{
    return static_cast<const ResetJobBookmarkRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue ResetJobBookmark \a response.
 */
void ResetJobBookmarkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetJobBookmarkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ResetJobBookmarkResponsePrivate
 * \brief The ResetJobBookmarkResponsePrivate class provides private implementation for ResetJobBookmarkResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ResetJobBookmarkResponsePrivate object with public implementation \a q.
 */
ResetJobBookmarkResponsePrivate::ResetJobBookmarkResponsePrivate(
    ResetJobBookmarkResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ResetJobBookmark response element from \a xml.
 */
void ResetJobBookmarkResponsePrivate::parseResetJobBookmarkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetJobBookmarkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
