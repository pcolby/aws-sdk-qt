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

#include "createworkspaceresponse.h"
#include "createworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::CreateWorkspaceResponse
 * \brief The CreateWorkspaceResponse class provides an interace for PrometheusService CreateWorkspace responses.
 *
 * \inmodule QtAwsPrometheusService
 *
 *  Amazon Managed Service for
 *
 * \sa PrometheusServiceClient::createWorkspace
 */

/*!
 * Constructs a CreateWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkspaceResponse::CreateWorkspaceResponse(
        const CreateWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrometheusServiceResponse(new CreateWorkspaceResponsePrivate(this), parent)
{
    setRequest(new CreateWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkspaceRequest * CreateWorkspaceResponse::request() const
{
    Q_D(const CreateWorkspaceResponse);
    return static_cast<const CreateWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrometheusService CreateWorkspace \a response.
 */
void CreateWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrometheusService::CreateWorkspaceResponsePrivate
 * \brief The CreateWorkspaceResponsePrivate class provides private implementation for CreateWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a CreateWorkspaceResponsePrivate object with public implementation \a q.
 */
CreateWorkspaceResponsePrivate::CreateWorkspaceResponsePrivate(
    CreateWorkspaceResponse * const q) : PrometheusServiceResponsePrivate(q)
{

}

/*!
 * Parses a PrometheusService CreateWorkspace response element from \a xml.
 */
void CreateWorkspaceResponsePrivate::parseCreateWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrometheusService
} // namespace QtAws
