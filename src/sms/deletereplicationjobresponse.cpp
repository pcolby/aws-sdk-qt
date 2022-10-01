// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationjobresponse.h"
#include "deletereplicationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::DeleteReplicationJobResponse
 * \brief The DeleteReplicationJobResponse class provides an interace for Sms DeleteReplicationJob responses.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::deleteReplicationJob
 */

/*!
 * Constructs a DeleteReplicationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationJobResponse::DeleteReplicationJobResponse(
        const DeleteReplicationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new DeleteReplicationJobResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationJobRequest * DeleteReplicationJobResponse::request() const
{
    Q_D(const DeleteReplicationJobResponse);
    return static_cast<const DeleteReplicationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms DeleteReplicationJob \a response.
 */
void DeleteReplicationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReplicationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::DeleteReplicationJobResponsePrivate
 * \brief The DeleteReplicationJobResponsePrivate class provides private implementation for DeleteReplicationJobResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a DeleteReplicationJobResponsePrivate object with public implementation \a q.
 */
DeleteReplicationJobResponsePrivate::DeleteReplicationJobResponsePrivate(
    DeleteReplicationJobResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms DeleteReplicationJob response element from \a xml.
 */
void DeleteReplicationJobResponsePrivate::parseDeleteReplicationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
