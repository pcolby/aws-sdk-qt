// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createagentresponse.h"
#include "createagentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateAgentResponse
 * \brief The CreateAgentResponse class provides an interace for DataSync CreateAgent responses.
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
 * \sa DataSyncClient::createAgent
 */

/*!
 * Constructs a CreateAgentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAgentResponse::CreateAgentResponse(
        const CreateAgentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateAgentResponsePrivate(this), parent)
{
    setRequest(new CreateAgentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAgentRequest * CreateAgentResponse::request() const
{
    Q_D(const CreateAgentResponse);
    return static_cast<const CreateAgentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateAgent \a response.
 */
void CreateAgentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAgentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateAgentResponsePrivate
 * \brief The CreateAgentResponsePrivate class provides private implementation for CreateAgentResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateAgentResponsePrivate object with public implementation \a q.
 */
CreateAgentResponsePrivate::CreateAgentResponsePrivate(
    CreateAgentResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateAgent response element from \a xml.
 */
void CreateAgentResponsePrivate::parseCreateAgentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAgentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
