// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generatechangesetresponse.h"
#include "generatechangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GenerateChangeSetResponse
 * \brief The GenerateChangeSetResponse class provides an interace for Sms GenerateChangeSet responses.
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
 * \sa SmsClient::generateChangeSet
 */

/*!
 * Constructs a GenerateChangeSetResponse object for \a reply to \a request, with parent \a parent.
 */
GenerateChangeSetResponse::GenerateChangeSetResponse(
        const GenerateChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new GenerateChangeSetResponsePrivate(this), parent)
{
    setRequest(new GenerateChangeSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GenerateChangeSetRequest * GenerateChangeSetResponse::request() const
{
    Q_D(const GenerateChangeSetResponse);
    return static_cast<const GenerateChangeSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms GenerateChangeSet \a response.
 */
void GenerateChangeSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GenerateChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::GenerateChangeSetResponsePrivate
 * \brief The GenerateChangeSetResponsePrivate class provides private implementation for GenerateChangeSetResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GenerateChangeSetResponsePrivate object with public implementation \a q.
 */
GenerateChangeSetResponsePrivate::GenerateChangeSetResponsePrivate(
    GenerateChangeSetResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms GenerateChangeSet response element from \a xml.
 */
void GenerateChangeSetResponsePrivate::parseGenerateChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateChangeSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
