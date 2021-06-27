/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putappreplicationconfigurationresponse.h"
#include "putappreplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::PutAppReplicationConfigurationResponse
 * \brief The PutAppReplicationConfigurationResponse class provides an interace for SMS PutAppReplicationConfiguration responses.
 *
 * \inmodule QtAwsSMS
 *
 *  <fullname>AWS Server Migration Service</fullname>
 * 
 *  AWS Server Migration Service (AWS SMS) makes it easier and faster for you to migrate your on-premises workloads to AWS.
 *  To learn more about AWS SMS, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">AWS Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">AWS Server Migration Service User
 *  Guide</a>
 *
 * \sa SmsClient::putAppReplicationConfiguration
 */

/*!
 * Constructs a PutAppReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutAppReplicationConfigurationResponse::PutAppReplicationConfigurationResponse(
        const PutAppReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new PutAppReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutAppReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAppReplicationConfigurationRequest * PutAppReplicationConfigurationResponse::request() const
{
    return static_cast<const PutAppReplicationConfigurationRequest *>(SmsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SMS PutAppReplicationConfiguration \a response.
 */
void PutAppReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAppReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::PutAppReplicationConfigurationResponsePrivate
 * \brief The PutAppReplicationConfigurationResponsePrivate class provides private implementation for PutAppReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a PutAppReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
PutAppReplicationConfigurationResponsePrivate::PutAppReplicationConfigurationResponsePrivate(
    PutAppReplicationConfigurationResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS PutAppReplicationConfiguration response element from \a xml.
 */
void PutAppReplicationConfigurationResponsePrivate::parsePutAppReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAppReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
