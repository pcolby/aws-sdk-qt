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

#include "listbackendenvironmentsresponse.h"
#include "listbackendenvironmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListBackendEnvironmentsResponse
 * \brief The ListBackendEnvironmentsResponse class provides an interace for Amplify ListBackendEnvironments responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listBackendEnvironments
 */

/*!
 * Constructs a ListBackendEnvironmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackendEnvironmentsResponse::ListBackendEnvironmentsResponse(
        const ListBackendEnvironmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new ListBackendEnvironmentsResponsePrivate(this), parent)
{
    setRequest(new ListBackendEnvironmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackendEnvironmentsRequest * ListBackendEnvironmentsResponse::request() const
{
    Q_D(const ListBackendEnvironmentsResponse);
    return static_cast<const ListBackendEnvironmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify ListBackendEnvironments \a response.
 */
void ListBackendEnvironmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackendEnvironmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::ListBackendEnvironmentsResponsePrivate
 * \brief The ListBackendEnvironmentsResponsePrivate class provides private implementation for ListBackendEnvironmentsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListBackendEnvironmentsResponsePrivate object with public implementation \a q.
 */
ListBackendEnvironmentsResponsePrivate::ListBackendEnvironmentsResponsePrivate(
    ListBackendEnvironmentsResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify ListBackendEnvironments response element from \a xml.
 */
void ListBackendEnvironmentsResponsePrivate::parseListBackendEnvironmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackendEnvironmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
