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

#include "resetfpgaimageattributeresponse.h"
#include "resetfpgaimageattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ResetFpgaImageAttributeResponse
 * \brief The ResetFpgaImageAttributeResponse class provides an interace for EC2 ResetFpgaImageAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::resetFpgaImageAttribute
 */

/*!
 * Constructs a ResetFpgaImageAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
ResetFpgaImageAttributeResponse::ResetFpgaImageAttributeResponse(
        const ResetFpgaImageAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ResetFpgaImageAttributeResponsePrivate(this), parent)
{
    setRequest(new ResetFpgaImageAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetFpgaImageAttributeRequest * ResetFpgaImageAttributeResponse::request() const
{
    Q_D(const ResetFpgaImageAttributeResponse);
    return static_cast<const ResetFpgaImageAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ResetFpgaImageAttribute \a response.
 */
void ResetFpgaImageAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResetFpgaImageAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ResetFpgaImageAttributeResponsePrivate
 * \brief The ResetFpgaImageAttributeResponsePrivate class provides private implementation for ResetFpgaImageAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ResetFpgaImageAttributeResponsePrivate object with public implementation \a q.
 */
ResetFpgaImageAttributeResponsePrivate::ResetFpgaImageAttributeResponsePrivate(
    ResetFpgaImageAttributeResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ResetFpgaImageAttribute response element from \a xml.
 */
void ResetFpgaImageAttributeResponsePrivate::parseResetFpgaImageAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetFpgaImageAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
