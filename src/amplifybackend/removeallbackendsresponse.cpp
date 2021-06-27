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

#include "removeallbackendsresponse.h"
#include "removeallbackendsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::RemoveAllBackendsResponse
 * \brief The RemoveAllBackendsResponse class provides an interace for AmplifyBackend RemoveAllBackends responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::removeAllBackends
 */

/*!
 * Constructs a RemoveAllBackendsResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveAllBackendsResponse::RemoveAllBackendsResponse(
        const RemoveAllBackendsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new RemoveAllBackendsResponsePrivate(this), parent)
{
    setRequest(new RemoveAllBackendsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveAllBackendsRequest * RemoveAllBackendsResponse::request() const
{
    return static_cast<const RemoveAllBackendsRequest *>(AmplifyBackendResponse::request());
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend RemoveAllBackends \a response.
 */
void RemoveAllBackendsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveAllBackendsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::RemoveAllBackendsResponsePrivate
 * \brief The RemoveAllBackendsResponsePrivate class provides private implementation for RemoveAllBackendsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a RemoveAllBackendsResponsePrivate object with public implementation \a q.
 */
RemoveAllBackendsResponsePrivate::RemoveAllBackendsResponsePrivate(
    RemoveAllBackendsResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend RemoveAllBackends response element from \a xml.
 */
void RemoveAllBackendsResponsePrivate::parseRemoveAllBackendsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAllBackendsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
