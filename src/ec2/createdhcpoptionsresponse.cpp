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

#include "createdhcpoptionsresponse.h"
#include "createdhcpoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateDhcpOptionsResponse
 * \brief The CreateDhcpOptionsResponse class provides an interace for EC2 CreateDhcpOptions responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createDhcpOptions
 */

/*!
 * Constructs a CreateDhcpOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDhcpOptionsResponse::CreateDhcpOptionsResponse(
        const CreateDhcpOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateDhcpOptionsResponsePrivate(this), parent)
{
    setRequest(new CreateDhcpOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDhcpOptionsRequest * CreateDhcpOptionsResponse::request() const
{
    Q_D(const CreateDhcpOptionsResponse);
    return static_cast<const CreateDhcpOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateDhcpOptions \a response.
 */
void CreateDhcpOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDhcpOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateDhcpOptionsResponsePrivate
 * \brief The CreateDhcpOptionsResponsePrivate class provides private implementation for CreateDhcpOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateDhcpOptionsResponsePrivate object with public implementation \a q.
 */
CreateDhcpOptionsResponsePrivate::CreateDhcpOptionsResponsePrivate(
    CreateDhcpOptionsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateDhcpOptions response element from \a xml.
 */
void CreateDhcpOptionsResponsePrivate::parseCreateDhcpOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDhcpOptionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
