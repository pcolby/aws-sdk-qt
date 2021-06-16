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

#include "createlocationsmbresponse.h"
#include "createlocationsmbresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationSmbResponse
 * \brief The CreateLocationSmbResponse class provides an interace for DataSync CreateLocationSmb responses.
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
 * \sa DataSyncClient::createLocationSmb
 */

/*!
 * Constructs a CreateLocationSmbResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLocationSmbResponse::CreateLocationSmbResponse(
        const CreateLocationSmbRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationSmbResponsePrivate(this), parent)
{
    setRequest(new CreateLocationSmbRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationSmbRequest * CreateLocationSmbResponse::request() const
{
    Q_D(const CreateLocationSmbResponse);
    return static_cast<const CreateLocationSmbRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationSmb \a response.
 */
void CreateLocationSmbResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationSmbResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationSmbResponsePrivate
 * \brief The CreateLocationSmbResponsePrivate class provides private implementation for CreateLocationSmbResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationSmbResponsePrivate object with public implementation \a q.
 */
CreateLocationSmbResponsePrivate::CreateLocationSmbResponsePrivate(
    CreateLocationSmbResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationSmb response element from \a xml.
 */
void CreateLocationSmbResponsePrivate::parseCreateLocationSmbResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationSmbResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
