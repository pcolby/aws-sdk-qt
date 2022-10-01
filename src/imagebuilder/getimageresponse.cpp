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

#include "getimageresponse.h"
#include "getimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImageResponse
 * \brief The GetImageResponse class provides an interace for ImageBuilder GetImage responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImage
 */

/*!
 * Constructs a GetImageResponse object for \a reply to \a request, with parent \a parent.
 */
GetImageResponse::GetImageResponse(
        const GetImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetImageResponsePrivate(this), parent)
{
    setRequest(new GetImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImageRequest * GetImageResponse::request() const
{
    Q_D(const GetImageResponse);
    return static_cast<const GetImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder GetImage \a response.
 */
void GetImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetImageResponsePrivate
 * \brief The GetImageResponsePrivate class provides private implementation for GetImageResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImageResponsePrivate object with public implementation \a q.
 */
GetImageResponsePrivate::GetImageResponsePrivate(
    GetImageResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetImage response element from \a xml.
 */
void GetImageResponsePrivate::parseGetImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
