// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasetgroupresponse.h"
#include "updatedatasetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::UpdateDatasetGroupResponse
 * \brief The UpdateDatasetGroupResponse class provides an interace for Forecast UpdateDatasetGroup responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::updateDatasetGroup
 */

/*!
 * Constructs a UpdateDatasetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDatasetGroupResponse::UpdateDatasetGroupResponse(
        const UpdateDatasetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new UpdateDatasetGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateDatasetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDatasetGroupRequest * UpdateDatasetGroupResponse::request() const
{
    Q_D(const UpdateDatasetGroupResponse);
    return static_cast<const UpdateDatasetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast UpdateDatasetGroup \a response.
 */
void UpdateDatasetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDatasetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::UpdateDatasetGroupResponsePrivate
 * \brief The UpdateDatasetGroupResponsePrivate class provides private implementation for UpdateDatasetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a UpdateDatasetGroupResponsePrivate object with public implementation \a q.
 */
UpdateDatasetGroupResponsePrivate::UpdateDatasetGroupResponsePrivate(
    UpdateDatasetGroupResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast UpdateDatasetGroup response element from \a xml.
 */
void UpdateDatasetGroupResponsePrivate::parseUpdateDatasetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDatasetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
