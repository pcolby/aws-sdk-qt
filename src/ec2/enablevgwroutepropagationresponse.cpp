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

#include "enablevgwroutepropagationresponse.h"
#include "enablevgwroutepropagationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::EnableVgwRoutePropagationResponse
 * \brief The EnableVgwRoutePropagationResponse class provides an interace for EC2 EnableVgwRoutePropagation responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::enableVgwRoutePropagation
 */

/*!
 * Constructs a EnableVgwRoutePropagationResponse object for \a reply to \a request, with parent \a parent.
 */
EnableVgwRoutePropagationResponse::EnableVgwRoutePropagationResponse(
        const EnableVgwRoutePropagationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new EnableVgwRoutePropagationResponsePrivate(this), parent)
{
    setRequest(new EnableVgwRoutePropagationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableVgwRoutePropagationRequest * EnableVgwRoutePropagationResponse::request() const
{
    Q_D(const EnableVgwRoutePropagationResponse);
    return static_cast<const EnableVgwRoutePropagationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 EnableVgwRoutePropagation \a response.
 */
void EnableVgwRoutePropagationResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnableVgwRoutePropagationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::EnableVgwRoutePropagationResponsePrivate
 * \brief The EnableVgwRoutePropagationResponsePrivate class provides private implementation for EnableVgwRoutePropagationResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a EnableVgwRoutePropagationResponsePrivate object with public implementation \a q.
 */
EnableVgwRoutePropagationResponsePrivate::EnableVgwRoutePropagationResponsePrivate(
    EnableVgwRoutePropagationResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 EnableVgwRoutePropagation response element from \a xml.
 */
void EnableVgwRoutePropagationResponsePrivate::parseEnableVgwRoutePropagationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableVgwRoutePropagationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
