// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminateappresponse.h"
#include "terminateappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::TerminateAppResponse
 * \brief The TerminateAppResponse class provides an interace for Sms TerminateApp responses.
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
 * \sa SmsClient::terminateApp
 */

/*!
 * Constructs a TerminateAppResponse object for \a reply to \a request, with parent \a parent.
 */
TerminateAppResponse::TerminateAppResponse(
        const TerminateAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new TerminateAppResponsePrivate(this), parent)
{
    setRequest(new TerminateAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TerminateAppRequest * TerminateAppResponse::request() const
{
    Q_D(const TerminateAppResponse);
    return static_cast<const TerminateAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms TerminateApp \a response.
 */
void TerminateAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::TerminateAppResponsePrivate
 * \brief The TerminateAppResponsePrivate class provides private implementation for TerminateAppResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a TerminateAppResponsePrivate object with public implementation \a q.
 */
TerminateAppResponsePrivate::TerminateAppResponsePrivate(
    TerminateAppResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms TerminateApp response element from \a xml.
 */
void TerminateAppResponsePrivate::parseTerminateAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
