// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
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
    Q_D(const CreateLocationFsxWindowsResponse);
    return static_cast<const CreateLocationFsxWindowsRequest *>(d->request);
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
