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

#include "createimageresponse.h"
#include "createimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateImageResponse
 * \brief The CreateImageResponse class provides an interace for ImageBuilder CreateImage responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createImage
 */

/*!
 * Constructs a CreateImageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImageResponse::CreateImageResponse(
        const CreateImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new CreateImageResponsePrivate(this), parent)
{
    setRequest(new CreateImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImageRequest * CreateImageResponse::request() const
{
    Q_D(const CreateImageResponse);
    return static_cast<const CreateImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder CreateImage \a response.
 */
void CreateImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::CreateImageResponsePrivate
 * \brief The CreateImageResponsePrivate class provides private implementation for CreateImageResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateImageResponsePrivate object with public implementation \a q.
 */
CreateImageResponsePrivate::CreateImageResponsePrivate(
    CreateImageResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder CreateImage response element from \a xml.
 */
void CreateImageResponsePrivate::parseCreateImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
