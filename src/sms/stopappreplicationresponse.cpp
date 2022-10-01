// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopappreplicationresponse.h"
#include "stopappreplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::StopAppReplicationResponse
 * \brief The StopAppReplicationResponse class provides an interace for Sms StopAppReplication responses.
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
 * \sa SmsClient::stopAppReplication
 */

/*!
 * Constructs a StopAppReplicationResponse object for \a reply to \a request, with parent \a parent.
 */
StopAppReplicationResponse::StopAppReplicationResponse(
        const StopAppReplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new StopAppReplicationResponsePrivate(this), parent)
{
    setRequest(new StopAppReplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopAppReplicationRequest * StopAppReplicationResponse::request() const
{
    Q_D(const StopAppReplicationResponse);
    return static_cast<const StopAppReplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms StopAppReplication \a response.
 */
void StopAppReplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopAppReplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::StopAppReplicationResponsePrivate
 * \brief The StopAppReplicationResponsePrivate class provides private implementation for StopAppReplicationResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a StopAppReplicationResponsePrivate object with public implementation \a q.
 */
StopAppReplicationResponsePrivate::StopAppReplicationResponsePrivate(
    StopAppReplicationResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms StopAppReplication response element from \a xml.
 */
void StopAppReplicationResponsePrivate::parseStopAppReplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopAppReplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
