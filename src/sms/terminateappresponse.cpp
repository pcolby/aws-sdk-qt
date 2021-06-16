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
