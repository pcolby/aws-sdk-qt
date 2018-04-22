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

#include "importinstanceresponse.h"
#include "importinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ImportInstanceResponse
 * \brief The ImportInstanceResponse class provides an interace for EC2 ImportInstance responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::importInstance
 */

/*!
 * Constructs a ImportInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
ImportInstanceResponse::ImportInstanceResponse(
        const ImportInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ImportInstanceResponsePrivate(this), parent)
{
    setRequest(new ImportInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportInstanceRequest * ImportInstanceResponse::request() const
{
    Q_D(const ImportInstanceResponse);
    return static_cast<const ImportInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ImportInstance \a response.
 */
void ImportInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(ImportInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ImportInstanceResponsePrivate
 * \brief The ImportInstanceResponsePrivate class provides private implementation for ImportInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ImportInstanceResponsePrivate object with public implementation \a q.
 */
ImportInstanceResponsePrivate::ImportInstanceResponsePrivate(
    ImportInstanceResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ImportInstance response element from \a xml.
 */
void ImportInstanceResponsePrivate::parseImportInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportInstanceResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
