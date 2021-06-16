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

#include "createlocations3response.h"
#include "createlocations3response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationS3Response
 * \brief The CreateLocationS3Response class provides an interace for DataSync CreateLocationS3 responses.
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
 * \sa DataSyncClient::createLocationS3
 */

/*!
 * Constructs a CreateLocationS3Response object for \a reply to \a request, with parent \a parent.
 */
CreateLocationS3Response::CreateLocationS3Response(
        const CreateLocationS3Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationS3ResponsePrivate(this), parent)
{
    setRequest(new CreateLocationS3Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationS3Request * CreateLocationS3Response::request() const
{
    Q_D(const CreateLocationS3Response);
    return static_cast<const CreateLocationS3Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationS3 \a response.
 */
void CreateLocationS3Response::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationS3Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationS3ResponsePrivate
 * \brief The CreateLocationS3ResponsePrivate class provides private implementation for CreateLocationS3Response.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationS3ResponsePrivate object with public implementation \a q.
 */
CreateLocationS3ResponsePrivate::CreateLocationS3ResponsePrivate(
    CreateLocationS3Response * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationS3 response element from \a xml.
 */
void CreateLocationS3ResponsePrivate::parseCreateLocationS3Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationS3Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
