/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *
 * \brief The GetMediaForFragmentListResponse class provides an interace for KinesisVideoArchivedMedia GetMediaForFragmentList responses.
 *
 * \ingroup KinesisVideoArchivedMedia
 *
 *
 * \sa KinesisVideoArchivedMediaClient::getMediaForFragmentList
 */

/*!
 * @brief  Constructs a new GetMediaForFragmentListResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const GetMediaForFragmentListRequest * GetMediaForFragmentListResponse::request() const
{
    Q_D(const GetMediaForFragmentListResponse);
    return static_cast<const GetMediaForFragmentListRequest *>(d->request);
}

/*!
 * @brief  Parse a KinesisVideoArchivedMedia GetMediaForFragmentList response.
 *
 * @param  response  Response to parse.
 */
void GetMediaForFragmentListResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetMediaForFragmentListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetMediaForFragmentListResponsePrivate
 *
 * \brief Private implementation for GetMediaForFragmentListResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetMediaForFragmentListResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMediaForFragmentListResponse instance.
 */
GetMediaForFragmentListResponsePrivate::GetMediaForFragmentListResponsePrivate(
    GetMediaForFragmentListResponse * const q) : KinesisVideoArchivedMediaResponsePrivate(q)
{

}

/*!
 * @brief  Parse an KinesisVideoArchivedMedia GetMediaForFragmentListResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMediaForFragmentListResponsePrivate::parseGetMediaForFragmentListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMediaForFragmentListResponse"));
    /// @todo
}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
