/*
    Copyright 2013-2021 Paul Colby

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

#include "createlocationfsxopenzfsresponse.h"
#include "createlocationfsxopenzfsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationFsxOpenZfsResponse
 * \brief The CreateLocationFsxOpenZfsResponse class provides an interace for DataSync CreateLocationFsxOpenZfs responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::createLocationFsxOpenZfs
 */

/*!
 * Constructs a CreateLocationFsxOpenZfsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLocationFsxOpenZfsResponse::CreateLocationFsxOpenZfsResponse(
        const CreateLocationFsxOpenZfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationFsxOpenZfsResponsePrivate(this), parent)
{
    setRequest(new CreateLocationFsxOpenZfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationFsxOpenZfsRequest * CreateLocationFsxOpenZfsResponse::request() const
{
    Q_D(const CreateLocationFsxOpenZfsResponse);
    return static_cast<const CreateLocationFsxOpenZfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationFsxOpenZfs \a response.
 */
void CreateLocationFsxOpenZfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationFsxOpenZfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationFsxOpenZfsResponsePrivate
 * \brief The CreateLocationFsxOpenZfsResponsePrivate class provides private implementation for CreateLocationFsxOpenZfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationFsxOpenZfsResponsePrivate object with public implementation \a q.
 */
CreateLocationFsxOpenZfsResponsePrivate::CreateLocationFsxOpenZfsResponsePrivate(
    CreateLocationFsxOpenZfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationFsxOpenZfs response element from \a xml.
 */
void CreateLocationFsxOpenZfsResponsePrivate::parseCreateLocationFsxOpenZfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationFsxOpenZfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
