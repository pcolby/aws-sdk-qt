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

#include "disablevgwroutepropagationresponse.h"
#include "disablevgwroutepropagationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DisableVgwRoutePropagationResponse
 * \brief The DisableVgwRoutePropagationResponse class provides an interace for EC2 DisableVgwRoutePropagation responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::disableVgwRoutePropagation
 */

/*!
 * Constructs a DisableVgwRoutePropagationResponse object for \a reply to \a request, with parent \a parent.
 */
DisableVgwRoutePropagationResponse::DisableVgwRoutePropagationResponse(
        const DisableVgwRoutePropagationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DisableVgwRoutePropagationResponsePrivate(this), parent)
{
    setRequest(new DisableVgwRoutePropagationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableVgwRoutePropagationRequest * DisableVgwRoutePropagationResponse::request() const
{
    Q_D(const DisableVgwRoutePropagationResponse);
    return static_cast<const DisableVgwRoutePropagationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DisableVgwRoutePropagation \a response.
 */
void DisableVgwRoutePropagationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisableVgwRoutePropagationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DisableVgwRoutePropagationResponsePrivate
 * \brief The DisableVgwRoutePropagationResponsePrivate class provides private implementation for DisableVgwRoutePropagationResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DisableVgwRoutePropagationResponsePrivate object with public implementation \a q.
 */
DisableVgwRoutePropagationResponsePrivate::DisableVgwRoutePropagationResponsePrivate(
    DisableVgwRoutePropagationResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DisableVgwRoutePropagation response element from \a xml.
 */
void DisableVgwRoutePropagationResponsePrivate::parseDisableVgwRoutePropagationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableVgwRoutePropagationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
