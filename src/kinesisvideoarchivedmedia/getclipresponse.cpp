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

#include "getclipresponse.h"
#include "getclipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetClipResponse
 * \brief The GetClipResponse class provides an interace for KinesisVideoArchivedMedia GetClip responses.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getClip
 */

/*!
 * Constructs a GetClipResponse object for \a reply to \a request, with parent \a parent.
 */
GetClipResponse::GetClipResponse(
        const GetClipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoArchivedMediaResponse(new GetClipResponsePrivate(this), parent)
{
    setRequest(new GetClipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetClipRequest * GetClipResponse::request() const
{
    return static_cast<const GetClipRequest *>(KinesisVideoArchivedMediaResponse::request());
}

/*!
 * \reimp
 * Parses a successful KinesisVideoArchivedMedia GetClip \a response.
 */
void GetClipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetClipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetClipResponsePrivate
 * \brief The GetClipResponsePrivate class provides private implementation for GetClipResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetClipResponsePrivate object with public implementation \a q.
 */
GetClipResponsePrivate::GetClipResponsePrivate(
    GetClipResponse * const q) : KinesisVideoArchivedMediaResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoArchivedMedia GetClip response element from \a xml.
 */
void GetClipResponsePrivate::parseGetClipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
