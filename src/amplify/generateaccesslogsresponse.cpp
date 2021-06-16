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

#include "generateaccesslogsresponse.h"
#include "generateaccesslogsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GenerateAccessLogsResponse
 * \brief The GenerateAccessLogsResponse class provides an interace for Amplify GenerateAccessLogs responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::generateAccessLogs
 */

/*!
 * Constructs a GenerateAccessLogsResponse object for \a reply to \a request, with parent \a parent.
 */
GenerateAccessLogsResponse::GenerateAccessLogsResponse(
        const GenerateAccessLogsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new GenerateAccessLogsResponsePrivate(this), parent)
{
    setRequest(new GenerateAccessLogsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GenerateAccessLogsRequest * GenerateAccessLogsResponse::request() const
{
    Q_D(const GenerateAccessLogsResponse);
    return static_cast<const GenerateAccessLogsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify GenerateAccessLogs \a response.
 */
void GenerateAccessLogsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GenerateAccessLogsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::GenerateAccessLogsResponsePrivate
 * \brief The GenerateAccessLogsResponsePrivate class provides private implementation for GenerateAccessLogsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GenerateAccessLogsResponsePrivate object with public implementation \a q.
 */
GenerateAccessLogsResponsePrivate::GenerateAccessLogsResponsePrivate(
    GenerateAccessLogsResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify GenerateAccessLogs response element from \a xml.
 */
void GenerateAccessLogsResponsePrivate::parseGenerateAccessLogsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateAccessLogsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
