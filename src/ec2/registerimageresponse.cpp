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

#include "registerimageresponse.h"
#include "registerimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RegisterImageResponse
 * \brief The RegisterImageResponse class provides an interace for EC2 RegisterImage responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::registerImage
 */

/*!
 * Constructs a RegisterImageResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterImageResponse::RegisterImageResponse(
        const RegisterImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new RegisterImageResponsePrivate(this), parent)
{
    setRequest(new RegisterImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterImageRequest * RegisterImageResponse::request() const
{
    Q_D(const RegisterImageResponse);
    return static_cast<const RegisterImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 RegisterImage \a response.
 */
void RegisterImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::RegisterImageResponsePrivate
 * \brief The RegisterImageResponsePrivate class provides private implementation for RegisterImageResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RegisterImageResponsePrivate object with public implementation \a q.
 */
RegisterImageResponsePrivate::RegisterImageResponsePrivate(
    RegisterImageResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 RegisterImage response element from \a xml.
 */
void RegisterImageResponsePrivate::parseRegisterImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
