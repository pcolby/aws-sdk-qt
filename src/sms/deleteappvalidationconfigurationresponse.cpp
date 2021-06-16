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

#include "deleteappvalidationconfigurationresponse.h"
#include "deleteappvalidationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::DeleteAppValidationConfigurationResponse
 * \brief The DeleteAppValidationConfigurationResponse class provides an interace for SMS DeleteAppValidationConfiguration responses.
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
 * \sa SmsClient::deleteAppValidationConfiguration
 */

/*!
 * Constructs a DeleteAppValidationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppValidationConfigurationResponse::DeleteAppValidationConfigurationResponse(
        const DeleteAppValidationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new DeleteAppValidationConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteAppValidationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppValidationConfigurationRequest * DeleteAppValidationConfigurationResponse::request() const
{
    Q_D(const DeleteAppValidationConfigurationResponse);
    return static_cast<const DeleteAppValidationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS DeleteAppValidationConfiguration \a response.
 */
void DeleteAppValidationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppValidationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::DeleteAppValidationConfigurationResponsePrivate
 * \brief The DeleteAppValidationConfigurationResponsePrivate class provides private implementation for DeleteAppValidationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a DeleteAppValidationConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteAppValidationConfigurationResponsePrivate::DeleteAppValidationConfigurationResponsePrivate(
    DeleteAppValidationConfigurationResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS DeleteAppValidationConfiguration response element from \a xml.
 */
void DeleteAppValidationConfigurationResponsePrivate::parseDeleteAppValidationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppValidationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
