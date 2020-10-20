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

#include "getmediaforfragmentlistresponse.h"
#include "getmediaforfragmentlistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetMediaForFragmentListResponse
 * \brief The GetMediaForFragmentListResponse class provides an interace for KinesisVideoArchivedMedia GetMediaForFragmentList responses.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getMediaForFragmentList
 */

/*!
 * Constructs a GetMediaForFragmentListResponse object for \a reply to \a request, with parent \a parent.
 */
GetMediaForFragmentListResponse::GetMediaForFragmentListResponse(
        const GetMediaForFragmentListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoArchivedMediaResponse(new GetMediaForFragmentListResponsePrivate(this), parent)
{
    setRequest(new GetMediaForFragmentListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMediaForFragmentListRequest * GetMediaForFragmentListResponse::request() const
{
    Q_D(const GetMediaForFragmentListResponse);
    return static_cast<const GetMediaForFragmentListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideoArchivedMedia GetMediaForFragmentList \a response.
 */
void GetMediaForFragmentListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMediaForFragmentListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoArchivedMedia::GetMediaForFragmentListResponsePrivate
 * \brief The GetMediaForFragmentListResponsePrivate class provides private implementation for GetMediaForFragmentListResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a GetMediaForFragmentListResponsePrivate object with public implementation \a q.
 */
GetMediaForFragmentListResponsePrivate::GetMediaForFragmentListResponsePrivate(
    GetMediaForFragmentListResponse * const q) : KinesisVideoArchivedMediaResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoArchivedMedia GetMediaForFragmentList response element from \a xml.
 */
void GetMediaForFragmentListResponsePrivate::parseGetMediaForFragmentListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMediaForFragmentListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
