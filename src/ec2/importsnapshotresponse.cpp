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

#include "importsnapshotresponse.h"
#include "importsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ImportSnapshotResponse
 * \brief The ImportSnapshotResponse class provides an interace for EC2 ImportSnapshot responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::importSnapshot
 */

/*!
 * Constructs a ImportSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
ImportSnapshotResponse::ImportSnapshotResponse(
        const ImportSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ImportSnapshotResponsePrivate(this), parent)
{
    setRequest(new ImportSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportSnapshotRequest * ImportSnapshotResponse::request() const
{
    Q_D(const ImportSnapshotResponse);
    return static_cast<const ImportSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ImportSnapshot \a response.
 */
void ImportSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ImportSnapshotResponsePrivate
 * \brief The ImportSnapshotResponsePrivate class provides private implementation for ImportSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ImportSnapshotResponsePrivate object with public implementation \a q.
 */
ImportSnapshotResponsePrivate::ImportSnapshotResponsePrivate(
    ImportSnapshotResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ImportSnapshot response element from \a xml.
 */
void ImportSnapshotResponsePrivate::parseImportSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportSnapshotResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
