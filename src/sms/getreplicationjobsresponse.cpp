// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreplicationjobsresponse.h"
#include "getreplicationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GetReplicationJobsResponse
 * \brief The GetReplicationJobsResponse class provides an interace for Sms GetReplicationJobs responses.
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
 * \sa SmsClient::getReplicationJobs
 */

/*!
 * Constructs a GetReplicationJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetReplicationJobsResponse::GetReplicationJobsResponse(
        const GetReplicationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new GetReplicationJobsResponsePrivate(this), parent)
{
    setRequest(new GetReplicationJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReplicationJobsRequest * GetReplicationJobsResponse::request() const
{
    Q_D(const GetReplicationJobsResponse);
    return static_cast<const GetReplicationJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms GetReplicationJobs \a response.
 */
void GetReplicationJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReplicationJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::GetReplicationJobsResponsePrivate
 * \brief The GetReplicationJobsResponsePrivate class provides private implementation for GetReplicationJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GetReplicationJobsResponsePrivate object with public implementation \a q.
 */
GetReplicationJobsResponsePrivate::GetReplicationJobsResponsePrivate(
    GetReplicationJobsResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms GetReplicationJobs response element from \a xml.
 */
void GetReplicationJobsResponsePrivate::parseGetReplicationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReplicationJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
