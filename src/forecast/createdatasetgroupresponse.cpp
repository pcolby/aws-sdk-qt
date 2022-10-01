// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetgroupresponse.h"
#include "createdatasetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateDatasetGroupResponse
 * \brief The CreateDatasetGroupResponse class provides an interace for Forecast CreateDatasetGroup responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createDatasetGroup
 */

/*!
 * Constructs a CreateDatasetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDatasetGroupResponse::CreateDatasetGroupResponse(
        const CreateDatasetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateDatasetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDatasetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDatasetGroupRequest * CreateDatasetGroupResponse::request() const
{
    Q_D(const CreateDatasetGroupResponse);
    return static_cast<const CreateDatasetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateDatasetGroup \a response.
 */
void CreateDatasetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDatasetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateDatasetGroupResponsePrivate
 * \brief The CreateDatasetGroupResponsePrivate class provides private implementation for CreateDatasetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateDatasetGroupResponsePrivate object with public implementation \a q.
 */
CreateDatasetGroupResponsePrivate::CreateDatasetGroupResponsePrivate(
    CreateDatasetGroupResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateDatasetGroup response element from \a xml.
 */
void CreateDatasetGroupResponsePrivate::parseCreateDatasetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDatasetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
