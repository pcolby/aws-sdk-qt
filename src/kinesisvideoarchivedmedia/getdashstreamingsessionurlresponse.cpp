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

#include "getdashstreamingsessionurlresponse.h"
#include "getdashstreamingsessionurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetDASHStreamingSessionURLResponse
 * \brief The GetDASHStreamingSessionURLResponse class provides an interace for KinesisVideoArchivedMedia GetDASHStreamingSessionURL responses.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getDASHStreamingSessionURL
 */

/*!
 * Constructs a GetDASHStreamingSessionURLResponse object for \a reply to \a request, with parent \a parent.
 */
GetDASHStreamingSessionURLResponse::GetDASHStreamingSessionURLResponse(
        const GetDASHStreamingSessionURLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoArchivedMediaResponse(new GetDASHStreamingSessionURLResponsePrivate(this), parent)
{
    setRequest(new GetDASHStreamingSessionURLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDASHStreamingSessionURLRequest * GetDASHStreamingSessionURLResponse::request() const
{
    Q_D(const GetDASHStreamingSessionURLResponse);
    return static_cast<const GetDASHStreamingSessionURLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideoArchivedMedia GetDASHStreamingSessionURL \a response.
 */
void GetDASHStreamingSessionURLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDASHStreamingSessionURLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetDASHStreamingSessionURLResponsePrivate
 * \brief The GetDASHStreamingSessionURLResponsePrivate class provides private implementation for GetDASHStreamingSessionURLResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetDASHStreamingSessionURLResponsePrivate object with public implementation \a q.
 */
GetDASHStreamingSessionURLResponsePrivate::GetDASHStreamingSessionURLResponsePrivate(
    GetDASHStreamingSessionURLResponse * const q) : KinesisVideoArchivedMediaResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoArchivedMedia GetDASHStreamingSessionURL response element from \a xml.
 */
void GetDASHStreamingSessionURLResponsePrivate::parseGetDASHStreamingSessionURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDASHStreamingSessionURLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
