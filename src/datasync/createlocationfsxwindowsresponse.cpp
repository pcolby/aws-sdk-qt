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

#include "createlocationfsxwindowsresponse.h"
#include "createlocationfsxwindowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationFsxWindowsResponse
 * \brief The CreateLocationFsxWindowsResponse class provides an interace for DataSync CreateLocationFsxWindows responses.
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
 * \sa DataSyncClient::createLocationFsxWindows
 */

/*!
 * Constructs a CreateLocationFsxWindowsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLocationFsxWindowsResponse::CreateLocationFsxWindowsResponse(
        const CreateLocationFsxWindowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationFsxWindowsResponsePrivate(this), parent)
{
    setRequest(new CreateLocationFsxWindowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationFsxWindowsRequest * CreateLocationFsxWindowsResponse::request() const
{
    return static_cast<const CreateLocationFsxWindowsRequest *>(DataSyncResponse::request());
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationFsxWindows \a response.
 */
void CreateLocationFsxWindowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationFsxWindowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationFsxWindowsResponsePrivate
 * \brief The CreateLocationFsxWindowsResponsePrivate class provides private implementation for CreateLocationFsxWindowsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationFsxWindowsResponsePrivate object with public implementation \a q.
 */
CreateLocationFsxWindowsResponsePrivate::CreateLocationFsxWindowsResponsePrivate(
    CreateLocationFsxWindowsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationFsxWindows response element from \a xml.
 */
void CreateLocationFsxWindowsResponsePrivate::parseCreateLocationFsxWindowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationFsxWindowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
