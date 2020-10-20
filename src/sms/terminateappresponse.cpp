/*
    Copyright 2013-2020 Paul Colby

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

#include "terminateappresponse.h"
#include "terminateappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::TerminateAppResponse
 * \brief The TerminateAppResponse class provides an interace for SMS TerminateApp responses.
 *
 * \inmodule QtAwsSMS
 *
 *  <fullname>AAWS Sever Migration Service</fullname>
 * 
 *  This is the <i>AWS Sever Migration Service API Reference</i>. It provides descriptions, syntax, and usage examples for
 *  each of the actions and data types for the AWS Sever Migration Service (AWS SMS). The topic for each action shows the
 *  Query API request parameters and the XML response. You can also view the XML request elements in the
 * 
 *  WSDL>
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>>
 * 
 *  To learn more about the Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="https://aws.amazon.com/server-migration-service/">AWS Sever Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/server-migration.html">AWS Sever
 *  Migration Service User Guide</a>
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
 * Parses a successful SMS TerminateApp \a response.
 */
void TerminateAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::TerminateAppResponsePrivate
 * \brief The TerminateAppResponsePrivate class provides private implementation for TerminateAppResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a TerminateAppResponsePrivate object with public implementation \a q.
 */
TerminateAppResponsePrivate::TerminateAppResponsePrivate(
    TerminateAppResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS TerminateApp response element from \a xml.
 */
void TerminateAppResponsePrivate::parseTerminateAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
