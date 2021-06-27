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

#include "generatechangesetresponse.h"
#include "generatechangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GenerateChangeSetResponse
 * \brief The GenerateChangeSetResponse class provides an interace for SMS GenerateChangeSet responses.
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
    return static_cast<const GenerateChangeSetRequest *>(SmsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SMS GenerateChangeSet \a response.
 */
void GenerateChangeSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GenerateChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::GenerateChangeSetResponsePrivate
 * \brief The GenerateChangeSetResponsePrivate class provides private implementation for GenerateChangeSetResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a GenerateChangeSetResponsePrivate object with public implementation \a q.
 */
GenerateChangeSetResponsePrivate::GenerateChangeSetResponsePrivate(
    GenerateChangeSetResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS GenerateChangeSet response element from \a xml.
 */
void GenerateChangeSetResponsePrivate::parseGenerateChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateChangeSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
