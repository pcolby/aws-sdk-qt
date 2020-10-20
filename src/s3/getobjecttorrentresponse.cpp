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

#include "getobjecttorrentresponse.h"
#include "getobjecttorrentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectTorrentResponse
 * \brief The GetObjectTorrentResponse class provides an interace for S3 GetObjectTorrent responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectTorrent
 */

/*!
 * Constructs a GetObjectTorrentResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectTorrentResponse::GetObjectTorrentResponse(
        const GetObjectTorrentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectTorrentResponsePrivate(this), parent)
{
    setRequest(new GetObjectTorrentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectTorrentRequest * GetObjectTorrentResponse::request() const
{
    Q_D(const GetObjectTorrentResponse);
    return static_cast<const GetObjectTorrentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetObjectTorrent \a response.
 */
void GetObjectTorrentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectTorrentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetObjectTorrentResponsePrivate
 * \brief The GetObjectTorrentResponsePrivate class provides private implementation for GetObjectTorrentResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectTorrentResponsePrivate object with public implementation \a q.
 */
GetObjectTorrentResponsePrivate::GetObjectTorrentResponsePrivate(
    GetObjectTorrentResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetObjectTorrent response element from \a xml.
 */
void GetObjectTorrentResponsePrivate::parseGetObjectTorrentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectTorrentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
