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

#include "createfpgaimageresponse.h"
#include "createfpgaimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateFpgaImageResponse
 * \brief The CreateFpgaImageResponse class provides an interace for EC2 CreateFpgaImage responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createFpgaImage
 */

/*!
 * Constructs a CreateFpgaImageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFpgaImageResponse::CreateFpgaImageResponse(
        const CreateFpgaImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateFpgaImageResponsePrivate(this), parent)
{
    setRequest(new CreateFpgaImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFpgaImageRequest * CreateFpgaImageResponse::request() const
{
    Q_D(const CreateFpgaImageResponse);
    return static_cast<const CreateFpgaImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateFpgaImage \a response.
 */
void CreateFpgaImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateFpgaImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateFpgaImageResponsePrivate
 * \brief The CreateFpgaImageResponsePrivate class provides private implementation for CreateFpgaImageResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateFpgaImageResponsePrivate object with public implementation \a q.
 */
CreateFpgaImageResponsePrivate::CreateFpgaImageResponsePrivate(
    CreateFpgaImageResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateFpgaImage response element from \a xml.
 */
void CreateFpgaImageResponsePrivate::parseCreateFpgaImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFpgaImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
