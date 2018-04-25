/*
    Copyright 2013-2018 Paul Colby

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

#include "importimageresponse.h"
#include "importimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ImportImageResponse
 * \brief The ImportImageResponse class provides an interace for EC2 ImportImage responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::importImage
 */

/*!
 * Constructs a ImportImageResponse object for \a reply to \a request, with parent \a parent.
 */
ImportImageResponse::ImportImageResponse(
        const ImportImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ImportImageResponsePrivate(this), parent)
{
    setRequest(new ImportImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportImageRequest * ImportImageResponse::request() const
{
    Q_D(const ImportImageResponse);
    return static_cast<const ImportImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ImportImage \a response.
 */
void ImportImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(ImportImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ImportImageResponsePrivate
 * \brief The ImportImageResponsePrivate class provides private implementation for ImportImageResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ImportImageResponsePrivate object with public implementation \a q.
 */
ImportImageResponsePrivate::ImportImageResponsePrivate(
    ImportImageResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ImportImage response element from \a xml.
 */
void ImportImageResponsePrivate::parseImportImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
