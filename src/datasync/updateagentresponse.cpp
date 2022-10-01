// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateagentresponse.h"
#include "updateagentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateAgentResponse
 * \brief The UpdateAgentResponse class provides an interace for DataSync UpdateAgent responses.
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
 * \sa DataSyncClient::updateAgent
 */

/*!
 * Constructs a UpdateAgentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAgentResponse::UpdateAgentResponse(
        const UpdateAgentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new UpdateAgentResponsePrivate(this), parent)
{
    setRequest(new UpdateAgentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAgentRequest * UpdateAgentResponse::request() const
{
    Q_D(const UpdateAgentResponse);
    return static_cast<const UpdateAgentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync UpdateAgent \a response.
 */
void UpdateAgentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAgentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::UpdateAgentResponsePrivate
 * \brief The UpdateAgentResponsePrivate class provides private implementation for UpdateAgentResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateAgentResponsePrivate object with public implementation \a q.
 */
UpdateAgentResponsePrivate::UpdateAgentResponsePrivate(
    UpdateAgentResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync UpdateAgent response element from \a xml.
 */
void UpdateAgentResponsePrivate::parseUpdateAgentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAgentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
