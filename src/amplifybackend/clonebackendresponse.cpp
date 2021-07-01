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

#include "clonebackendresponse.h"
#include "clonebackendresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CloneBackendResponse
 * \brief The CloneBackendResponse class provides an interace for AmplifyBackend CloneBackend responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::cloneBackend
 */

/*!
 * Constructs a CloneBackendResponse object for \a reply to \a request, with parent \a parent.
 */
CloneBackendResponse::CloneBackendResponse(
        const CloneBackendRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CloneBackendResponsePrivate(this), parent)
{
    setRequest(new CloneBackendRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CloneBackendRequest * CloneBackendResponse::request() const
{
    Q_D(const CloneBackendResponse);
    return static_cast<const CloneBackendRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CloneBackend \a response.
 */
void CloneBackendResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CloneBackendResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CloneBackendResponsePrivate
 * \brief The CloneBackendResponsePrivate class provides private implementation for CloneBackendResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CloneBackendResponsePrivate object with public implementation \a q.
 */
CloneBackendResponsePrivate::CloneBackendResponsePrivate(
    CloneBackendResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CloneBackend response element from \a xml.
 */
void CloneBackendResponsePrivate::parseCloneBackendResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CloneBackendResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
