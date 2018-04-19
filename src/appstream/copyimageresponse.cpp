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

#include "copyimageresponse.h"
#include "copyimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CopyImageResponse
 * \brief The CopyImageResponse class provides an interace for AppStream CopyImage responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::copyImage
 */

/*!
 * Constructs a CopyImageResponse object for \a reply to \a request, with parent \a parent.
 */
CopyImageResponse::CopyImageResponse(
        const CopyImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CopyImageResponsePrivate(this), parent)
{
    setRequest(new CopyImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyImageRequest * CopyImageResponse::request() const
{
    Q_D(const CopyImageResponse);
    return static_cast<const CopyImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream CopyImage \a response.
 */
void CopyImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(CopyImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::CopyImageResponsePrivate
 * \brief The CopyImageResponsePrivate class provides private implementation for CopyImageResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CopyImageResponsePrivate object with public implementation \a q.
 */
CopyImageResponsePrivate::CopyImageResponsePrivate(
    CopyImageResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream CopyImage response element from \a xml.
 */
void CopyImageResponsePrivate::parseCopyImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyImageResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
