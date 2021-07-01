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

#include "listworkspacesresponse.h"
#include "listworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::ListWorkspacesResponse
 * \brief The ListWorkspacesResponse class provides an interace for PrometheusService ListWorkspaces responses.
 *
 * \inmodule QtAwsPrometheusService
 *
 *  Amazon Managed Service for
 *
 * \sa PrometheusServiceClient::listWorkspaces
 */

/*!
 * Constructs a ListWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkspacesResponse::ListWorkspacesResponse(
        const ListWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrometheusServiceResponse(new ListWorkspacesResponsePrivate(this), parent)
{
    setRequest(new ListWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkspacesRequest * ListWorkspacesResponse::request() const
{
    Q_D(const ListWorkspacesResponse);
    return static_cast<const ListWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrometheusService ListWorkspaces \a response.
 */
void ListWorkspacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrometheusService::ListWorkspacesResponsePrivate
 * \brief The ListWorkspacesResponsePrivate class provides private implementation for ListWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a ListWorkspacesResponsePrivate object with public implementation \a q.
 */
ListWorkspacesResponsePrivate::ListWorkspacesResponsePrivate(
    ListWorkspacesResponse * const q) : PrometheusServiceResponsePrivate(q)
{

}

/*!
 * Parses a PrometheusService ListWorkspaces response element from \a xml.
 */
void ListWorkspacesResponsePrivate::parseListWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkspacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrometheusService
} // namespace QtAws
