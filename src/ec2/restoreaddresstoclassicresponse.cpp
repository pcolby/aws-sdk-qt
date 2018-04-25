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

#include "restoreaddresstoclassicresponse.h"
#include "restoreaddresstoclassicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RestoreAddressToClassicResponse
 * \brief The RestoreAddressToClassicResponse class provides an interace for EC2 RestoreAddressToClassic responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::restoreAddressToClassic
 */

/*!
 * Constructs a RestoreAddressToClassicResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreAddressToClassicResponse::RestoreAddressToClassicResponse(
        const RestoreAddressToClassicRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new RestoreAddressToClassicResponsePrivate(this), parent)
{
    setRequest(new RestoreAddressToClassicRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreAddressToClassicRequest * RestoreAddressToClassicResponse::request() const
{
    Q_D(const RestoreAddressToClassicResponse);
    return static_cast<const RestoreAddressToClassicRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 RestoreAddressToClassic \a response.
 */
void RestoreAddressToClassicResponse::parseSuccess(QIODevice &response)
{
    Q_D(RestoreAddressToClassicResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::RestoreAddressToClassicResponsePrivate
 * \brief The RestoreAddressToClassicResponsePrivate class provides private implementation for RestoreAddressToClassicResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RestoreAddressToClassicResponsePrivate object with public implementation \a q.
 */
RestoreAddressToClassicResponsePrivate::RestoreAddressToClassicResponsePrivate(
    RestoreAddressToClassicResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 RestoreAddressToClassic response element from \a xml.
 */
void RestoreAddressToClassicResponsePrivate::parseRestoreAddressToClassicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreAddressToClassicResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
