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

#include "createnetworkaclentryresponse.h"
#include "createnetworkaclentryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateNetworkAclEntryResponse
 * \brief The CreateNetworkAclEntryResponse class provides an interace for EC2 CreateNetworkAclEntry responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createNetworkAclEntry
 */

/*!
 * Constructs a CreateNetworkAclEntryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNetworkAclEntryResponse::CreateNetworkAclEntryResponse(
        const CreateNetworkAclEntryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateNetworkAclEntryResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkAclEntryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNetworkAclEntryRequest * CreateNetworkAclEntryResponse::request() const
{
    Q_D(const CreateNetworkAclEntryResponse);
    return static_cast<const CreateNetworkAclEntryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateNetworkAclEntry \a response.
 */
void CreateNetworkAclEntryResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateNetworkAclEntryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateNetworkAclEntryResponsePrivate
 * \brief The CreateNetworkAclEntryResponsePrivate class provides private implementation for CreateNetworkAclEntryResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateNetworkAclEntryResponsePrivate object with public implementation \a q.
 */
CreateNetworkAclEntryResponsePrivate::CreateNetworkAclEntryResponsePrivate(
    CreateNetworkAclEntryResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateNetworkAclEntry response element from \a xml.
 */
void CreateNetworkAclEntryResponsePrivate::parseCreateNetworkAclEntryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkAclEntryResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
