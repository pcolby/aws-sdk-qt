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

#include "createlocationnfsresponse.h"
#include "createlocationnfsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationNfsResponse
 * \brief The CreateLocationNfsResponse class provides an interace for DataSync CreateLocationNfs responses.
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
 * \sa DataSyncClient::createLocationNfs
 */

/*!
 * Constructs a CreateLocationNfsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLocationNfsResponse::CreateLocationNfsResponse(
        const CreateLocationNfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationNfsResponsePrivate(this), parent)
{
    setRequest(new CreateLocationNfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationNfsRequest * CreateLocationNfsResponse::request() const
{
    Q_D(const CreateLocationNfsResponse);
    return static_cast<const CreateLocationNfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationNfs \a response.
 */
void CreateLocationNfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationNfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationNfsResponsePrivate
 * \brief The CreateLocationNfsResponsePrivate class provides private implementation for CreateLocationNfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationNfsResponsePrivate object with public implementation \a q.
 */
CreateLocationNfsResponsePrivate::CreateLocationNfsResponsePrivate(
    CreateLocationNfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationNfs response element from \a xml.
 */
void CreateLocationNfsResponsePrivate::parseCreateLocationNfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationNfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
