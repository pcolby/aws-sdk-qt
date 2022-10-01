// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteagentresponse.h"
#include "deleteagentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DeleteAgentResponse
 * \brief The DeleteAgentResponse class provides an interace for DataSync DeleteAgent responses.
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
 * \sa DataSyncClient::deleteAgent
 */

/*!
 * Constructs a DeleteAgentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAgentResponse::DeleteAgentResponse(
        const DeleteAgentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DeleteAgentResponsePrivate(this), parent)
{
    setRequest(new DeleteAgentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAgentRequest * DeleteAgentResponse::request() const
{
    Q_D(const DeleteAgentResponse);
    return static_cast<const DeleteAgentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DeleteAgent \a response.
 */
void DeleteAgentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAgentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DeleteAgentResponsePrivate
 * \brief The DeleteAgentResponsePrivate class provides private implementation for DeleteAgentResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DeleteAgentResponsePrivate object with public implementation \a q.
 */
DeleteAgentResponsePrivate::DeleteAgentResponsePrivate(
    DeleteAgentResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DeleteAgent response element from \a xml.
 */
void DeleteAgentResponsePrivate::parseDeleteAgentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAgentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
