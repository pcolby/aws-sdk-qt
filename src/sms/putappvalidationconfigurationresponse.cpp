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

#include "putappvalidationconfigurationresponse.h"
#include "putappvalidationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::PutAppValidationConfigurationResponse
 * \brief The PutAppValidationConfigurationResponse class provides an interace for SMS PutAppValidationConfiguration responses.
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
 * \sa SmsClient::putAppValidationConfiguration
 */

/*!
 * Constructs a PutAppValidationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutAppValidationConfigurationResponse::PutAppValidationConfigurationResponse(
        const PutAppValidationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new PutAppValidationConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutAppValidationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAppValidationConfigurationRequest * PutAppValidationConfigurationResponse::request() const
{
    Q_D(const PutAppValidationConfigurationResponse);
    return static_cast<const PutAppValidationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS PutAppValidationConfiguration \a response.
 */
void PutAppValidationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAppValidationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::PutAppValidationConfigurationResponsePrivate
 * \brief The PutAppValidationConfigurationResponsePrivate class provides private implementation for PutAppValidationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a PutAppValidationConfigurationResponsePrivate object with public implementation \a q.
 */
PutAppValidationConfigurationResponsePrivate::PutAppValidationConfigurationResponsePrivate(
    PutAppValidationConfigurationResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS PutAppValidationConfiguration response element from \a xml.
 */
void PutAppValidationConfigurationResponsePrivate::parsePutAppValidationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAppValidationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
