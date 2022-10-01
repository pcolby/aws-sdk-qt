// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecolumnstatisticsfortableresponse.h"
#include "updatecolumnstatisticsfortableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateColumnStatisticsForTableResponse
 * \brief The UpdateColumnStatisticsForTableResponse class provides an interace for Glue UpdateColumnStatisticsForTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateColumnStatisticsForTable
 */

/*!
 * Constructs a UpdateColumnStatisticsForTableResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateColumnStatisticsForTableResponse::UpdateColumnStatisticsForTableResponse(
        const UpdateColumnStatisticsForTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateColumnStatisticsForTableResponsePrivate(this), parent)
{
    setRequest(new UpdateColumnStatisticsForTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateColumnStatisticsForTableRequest * UpdateColumnStatisticsForTableResponse::request() const
{
    Q_D(const UpdateColumnStatisticsForTableResponse);
    return static_cast<const UpdateColumnStatisticsForTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateColumnStatisticsForTable \a response.
 */
void UpdateColumnStatisticsForTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateColumnStatisticsForTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateColumnStatisticsForTableResponsePrivate
 * \brief The UpdateColumnStatisticsForTableResponsePrivate class provides private implementation for UpdateColumnStatisticsForTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateColumnStatisticsForTableResponsePrivate object with public implementation \a q.
 */
UpdateColumnStatisticsForTableResponsePrivate::UpdateColumnStatisticsForTableResponsePrivate(
    UpdateColumnStatisticsForTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateColumnStatisticsForTable response element from \a xml.
 */
void UpdateColumnStatisticsForTableResponsePrivate::parseUpdateColumnStatisticsForTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateColumnStatisticsForTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
