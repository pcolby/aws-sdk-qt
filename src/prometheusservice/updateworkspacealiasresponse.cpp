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

#include "updateworkspacealiasresponse.h"
#include "updateworkspacealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::UpdateWorkspaceAliasResponse
 * \brief The UpdateWorkspaceAliasResponse class provides an interace for PrometheusService UpdateWorkspaceAlias responses.
 *
 * \inmodule QtAwsPrometheusService
 *
 *  Amazon Managed Service for
 *
 * \sa PrometheusServiceClient::updateWorkspaceAlias
 */

/*!
 * Constructs a UpdateWorkspaceAliasResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkspaceAliasResponse::UpdateWorkspaceAliasResponse(
        const UpdateWorkspaceAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrometheusServiceResponse(new UpdateWorkspaceAliasResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkspaceAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkspaceAliasRequest * UpdateWorkspaceAliasResponse::request() const
{
    return static_cast<const UpdateWorkspaceAliasRequest *>(PrometheusServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful PrometheusService UpdateWorkspaceAlias \a response.
 */
void UpdateWorkspaceAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkspaceAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrometheusService::UpdateWorkspaceAliasResponsePrivate
 * \brief The UpdateWorkspaceAliasResponsePrivate class provides private implementation for UpdateWorkspaceAliasResponse.
 * \internal
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a UpdateWorkspaceAliasResponsePrivate object with public implementation \a q.
 */
UpdateWorkspaceAliasResponsePrivate::UpdateWorkspaceAliasResponsePrivate(
    UpdateWorkspaceAliasResponse * const q) : PrometheusServiceResponsePrivate(q)
{

}

/*!
 * Parses a PrometheusService UpdateWorkspaceAlias response element from \a xml.
 */
void UpdateWorkspaceAliasResponsePrivate::parseUpdateWorkspaceAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkspaceAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrometheusService
} // namespace QtAws
