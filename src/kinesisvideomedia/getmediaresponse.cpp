/*
    Copyright 2013-2019 Paul Colby

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

#include "getmediaresponse.h"
#include "getmediaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoMedia {

/*!
 * \class QtAws::KinesisVideoMedia::GetMediaResponse
 * \brief The GetMediaResponse class provides an interace for KinesisVideoMedia GetMedia responses.
 *
 * \inmodule QtAwsKinesisVideoMedia
 *
 *
 * \sa KinesisVideoMediaClient::getMedia
 */

/*!
 * Constructs a GetMediaResponse object for \a reply to \a request, with parent \a parent.
 */
GetMediaResponse::GetMediaResponse(
        const GetMediaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoMediaResponse(new GetMediaResponsePrivate(this), parent)
{
    setRequest(new GetMediaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMediaRequest * GetMediaResponse::request() const
{
    Q_D(const GetMediaResponse);
    return static_cast<const GetMediaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideoMedia GetMedia \a response.
 */
void GetMediaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMediaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoMedia::GetMediaResponsePrivate
 * \brief The GetMediaResponsePrivate class provides private implementation for GetMediaResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoMedia
 */

/*!
 * Constructs a GetMediaResponsePrivate object with public implementation \a q.
 */
GetMediaResponsePrivate::GetMediaResponsePrivate(
    GetMediaResponse * const q) : KinesisVideoMediaResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoMedia GetMedia response element from \a xml.
 */
void GetMediaResponsePrivate::parseGetMediaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMediaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoMedia
} // namespace QtAws
