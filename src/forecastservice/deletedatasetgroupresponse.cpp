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

#include "deletedatasetgroupresponse.h"
#include "deletedatasetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DeleteDatasetGroupResponse
 * \brief The DeleteDatasetGroupResponse class provides an interace for ForecastService DeleteDatasetGroup responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::deleteDatasetGroup
 */

/*!
 * Constructs a DeleteDatasetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDatasetGroupResponse::DeleteDatasetGroupResponse(
        const DeleteDatasetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new DeleteDatasetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDatasetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDatasetGroupRequest * DeleteDatasetGroupResponse::request() const
{
    Q_D(const DeleteDatasetGroupResponse);
    return static_cast<const DeleteDatasetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ForecastService DeleteDatasetGroup \a response.
 */
void DeleteDatasetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDatasetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::DeleteDatasetGroupResponsePrivate
 * \brief The DeleteDatasetGroupResponsePrivate class provides private implementation for DeleteDatasetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DeleteDatasetGroupResponsePrivate object with public implementation \a q.
 */
DeleteDatasetGroupResponsePrivate::DeleteDatasetGroupResponsePrivate(
    DeleteDatasetGroupResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService DeleteDatasetGroup response element from \a xml.
 */
void DeleteDatasetGroupResponsePrivate::parseDeleteDatasetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatasetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
