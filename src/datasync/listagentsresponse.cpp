// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listagentsresponse.h"
#include "listagentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::ListAgentsResponse
 * \brief The ListAgentsResponse class provides an interace for DataSync ListAgents responses.
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
 * \sa DataSyncClient::listAgents
 */

/*!
 * Constructs a ListAgentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAgentsResponse::ListAgentsResponse(
        const ListAgentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new ListAgentsResponsePrivate(this), parent)
{
    setRequest(new ListAgentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAgentsRequest * ListAgentsResponse::request() const
{
    Q_D(const ListAgentsResponse);
    return static_cast<const ListAgentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync ListAgents \a response.
 */
void ListAgentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAgentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::ListAgentsResponsePrivate
 * \brief The ListAgentsResponsePrivate class provides private implementation for ListAgentsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a ListAgentsResponsePrivate object with public implementation \a q.
 */
ListAgentsResponsePrivate::ListAgentsResponsePrivate(
    ListAgentsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync ListAgents response element from \a xml.
 */
void ListAgentsResponsePrivate::parseListAgentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAgentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
