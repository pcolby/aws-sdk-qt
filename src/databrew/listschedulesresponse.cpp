// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listschedulesresponse.h"
#include "listschedulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListSchedulesResponse
 * \brief The ListSchedulesResponse class provides an interace for DataBrew ListSchedules responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listSchedules
 */

/*!
 * Constructs a ListSchedulesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSchedulesResponse::ListSchedulesResponse(
        const ListSchedulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new ListSchedulesResponsePrivate(this), parent)
{
    setRequest(new ListSchedulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSchedulesRequest * ListSchedulesResponse::request() const
{
    Q_D(const ListSchedulesResponse);
    return static_cast<const ListSchedulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew ListSchedules \a response.
 */
void ListSchedulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSchedulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::ListSchedulesResponsePrivate
 * \brief The ListSchedulesResponsePrivate class provides private implementation for ListSchedulesResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListSchedulesResponsePrivate object with public implementation \a q.
 */
ListSchedulesResponsePrivate::ListSchedulesResponsePrivate(
    ListSchedulesResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew ListSchedules response element from \a xml.
 */
void ListSchedulesResponsePrivate::parseListSchedulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSchedulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
