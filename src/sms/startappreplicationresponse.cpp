// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startappreplicationresponse.h"
#include "startappreplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::StartAppReplicationResponse
 * \brief The StartAppReplicationResponse class provides an interace for Sms StartAppReplication responses.
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
 * \sa SmsClient::startAppReplication
 */

/*!
 * Constructs a StartAppReplicationResponse object for \a reply to \a request, with parent \a parent.
 */
StartAppReplicationResponse::StartAppReplicationResponse(
        const StartAppReplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new StartAppReplicationResponsePrivate(this), parent)
{
    setRequest(new StartAppReplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartAppReplicationRequest * StartAppReplicationResponse::request() const
{
    Q_D(const StartAppReplicationResponse);
    return static_cast<const StartAppReplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms StartAppReplication \a response.
 */
void StartAppReplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartAppReplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::StartAppReplicationResponsePrivate
 * \brief The StartAppReplicationResponsePrivate class provides private implementation for StartAppReplicationResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a StartAppReplicationResponsePrivate object with public implementation \a q.
 */
StartAppReplicationResponsePrivate::StartAppReplicationResponsePrivate(
    StartAppReplicationResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms StartAppReplication response element from \a xml.
 */
void StartAppReplicationResponsePrivate::parseStartAppReplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartAppReplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
