// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetgroupresponse.h"
#include "deletedatasetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteDatasetGroupResponse
 * \brief The DeleteDatasetGroupResponse class provides an interace for Forecast DeleteDatasetGroup responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteDatasetGroup
 */

/*!
 * Constructs a DeleteDatasetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDatasetGroupResponse::DeleteDatasetGroupResponse(
        const DeleteDatasetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteDatasetGroupResponsePrivate(this), parent)
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
 * Parses a successful Forecast DeleteDatasetGroup \a response.
 */
void DeleteDatasetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDatasetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteDatasetGroupResponsePrivate
 * \brief The DeleteDatasetGroupResponsePrivate class provides private implementation for DeleteDatasetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteDatasetGroupResponsePrivate object with public implementation \a q.
 */
DeleteDatasetGroupResponsePrivate::DeleteDatasetGroupResponsePrivate(
    DeleteDatasetGroupResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteDatasetGroup response element from \a xml.
 */
void DeleteDatasetGroupResponsePrivate::parseDeleteDatasetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatasetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
