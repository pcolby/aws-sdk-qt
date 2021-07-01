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

#include "deleteworkspaceresponse.h"
#include "deleteworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::DeleteWorkspaceResponse
 * \brief The DeleteWorkspaceResponse class provides an interace for PrometheusService DeleteWorkspace responses.
 *
 * \inmodule QtAwsPrometheusService
 *
 *  Amazon Managed Service for
 *
 * \sa PrometheusServiceClient::deleteWorkspace
 */

/*!
 * Constructs a DeleteWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkspaceResponse::DeleteWorkspaceResponse(
        const DeleteWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrometheusServiceResponse(new DeleteWorkspaceResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkspaceRequest * DeleteWorkspaceResponse::request() const
{
    Q_D(const DeleteWorkspaceResponse);
    return static_cast<const DeleteWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrometheusService DeleteWorkspace \a response.
 */
void DeleteWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrometheusService::DeleteWorkspaceResponsePrivate
 * \brief The DeleteWorkspaceResponsePrivate class provides private implementation for DeleteWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a DeleteWorkspaceResponsePrivate object with public implementation \a q.
 */
DeleteWorkspaceResponsePrivate::DeleteWorkspaceResponsePrivate(
    DeleteWorkspaceResponse * const q) : PrometheusServiceResponsePrivate(q)
{

}

/*!
 * Parses a PrometheusService DeleteWorkspace response element from \a xml.
 */
void DeleteWorkspaceResponsePrivate::parseDeleteWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrometheusService
} // namespace QtAws
