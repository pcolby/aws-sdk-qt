// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelocationresponse.h"
#include "deletelocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DeleteLocationResponse
 * \brief The DeleteLocationResponse class provides an interace for DataSync DeleteLocation responses.
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
 * \sa DataSyncClient::deleteLocation
 */

/*!
 * Constructs a DeleteLocationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLocationResponse::DeleteLocationResponse(
        const DeleteLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DeleteLocationResponsePrivate(this), parent)
{
    setRequest(new DeleteLocationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLocationRequest * DeleteLocationResponse::request() const
{
    Q_D(const DeleteLocationResponse);
    return static_cast<const DeleteLocationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DeleteLocation \a response.
 */
void DeleteLocationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLocationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DeleteLocationResponsePrivate
 * \brief The DeleteLocationResponsePrivate class provides private implementation for DeleteLocationResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DeleteLocationResponsePrivate object with public implementation \a q.
 */
DeleteLocationResponsePrivate::DeleteLocationResponsePrivate(
    DeleteLocationResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DeleteLocation response element from \a xml.
 */
void DeleteLocationResponsePrivate::parseDeleteLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLocationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
