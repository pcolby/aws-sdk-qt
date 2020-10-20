/*
    Copyright 2013-2020 Paul Colby

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

#include "createlocationefsresponse.h"
#include "createlocationefsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationEfsResponse
 * \brief The CreateLocationEfsResponse class provides an interace for DataSync CreateLocationEfs responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>AWS DataSync</fullname>
 * 
 *  AWS DataSync is a managed data transfer service that makes it simpler for you to automate moving data between
 *  on-premises storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for AWS DataSync contains documentation for a programming interface that you can use to
 *  manage AWS
 *
 * \sa DataSyncClient::createLocationEfs
 */

/*!
 * Constructs a CreateLocationEfsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLocationEfsResponse::CreateLocationEfsResponse(
        const CreateLocationEfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationEfsResponsePrivate(this), parent)
{
    setRequest(new CreateLocationEfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationEfsRequest * CreateLocationEfsResponse::request() const
{
    Q_D(const CreateLocationEfsResponse);
    return static_cast<const CreateLocationEfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationEfs \a response.
 */
void CreateLocationEfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationEfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationEfsResponsePrivate
 * \brief The CreateLocationEfsResponsePrivate class provides private implementation for CreateLocationEfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationEfsResponsePrivate object with public implementation \a q.
 */
CreateLocationEfsResponsePrivate::CreateLocationEfsResponsePrivate(
    CreateLocationEfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationEfs response element from \a xml.
 */
void CreateLocationEfsResponsePrivate::parseCreateLocationEfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationEfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
