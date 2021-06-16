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

#include "listbackendjobsresponse.h"
#include "listbackendjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ListBackendJobsResponse
 * \brief The ListBackendJobsResponse class provides an interace for AmplifyBackend ListBackendJobs responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::listBackendJobs
 */

/*!
 * Constructs a ListBackendJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackendJobsResponse::ListBackendJobsResponse(
        const ListBackendJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new ListBackendJobsResponsePrivate(this), parent)
{
    setRequest(new ListBackendJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackendJobsRequest * ListBackendJobsResponse::request() const
{
    Q_D(const ListBackendJobsResponse);
    return static_cast<const ListBackendJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend ListBackendJobs \a response.
 */
void ListBackendJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackendJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::ListBackendJobsResponsePrivate
 * \brief The ListBackendJobsResponsePrivate class provides private implementation for ListBackendJobsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ListBackendJobsResponsePrivate object with public implementation \a q.
 */
ListBackendJobsResponsePrivate::ListBackendJobsResponsePrivate(
    ListBackendJobsResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend ListBackendJobs response element from \a xml.
 */
void ListBackendJobsResponsePrivate::parseListBackendJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackendJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
