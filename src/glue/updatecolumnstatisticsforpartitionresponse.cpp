// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecolumnstatisticsforpartitionresponse.h"
#include "updatecolumnstatisticsforpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateColumnStatisticsForPartitionResponse
 * \brief The UpdateColumnStatisticsForPartitionResponse class provides an interace for Glue UpdateColumnStatisticsForPartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateColumnStatisticsForPartition
 */

/*!
 * Constructs a UpdateColumnStatisticsForPartitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateColumnStatisticsForPartitionResponse::UpdateColumnStatisticsForPartitionResponse(
        const UpdateColumnStatisticsForPartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateColumnStatisticsForPartitionResponsePrivate(this), parent)
{
    setRequest(new UpdateColumnStatisticsForPartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateColumnStatisticsForPartitionRequest * UpdateColumnStatisticsForPartitionResponse::request() const
{
    Q_D(const UpdateColumnStatisticsForPartitionResponse);
    return static_cast<const UpdateColumnStatisticsForPartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateColumnStatisticsForPartition \a response.
 */
void UpdateColumnStatisticsForPartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateColumnStatisticsForPartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateColumnStatisticsForPartitionResponsePrivate
 * \brief The UpdateColumnStatisticsForPartitionResponsePrivate class provides private implementation for UpdateColumnStatisticsForPartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateColumnStatisticsForPartitionResponsePrivate object with public implementation \a q.
 */
UpdateColumnStatisticsForPartitionResponsePrivate::UpdateColumnStatisticsForPartitionResponsePrivate(
    UpdateColumnStatisticsForPartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateColumnStatisticsForPartition response element from \a xml.
 */
void UpdateColumnStatisticsForPartitionResponsePrivate::parseUpdateColumnStatisticsForPartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateColumnStatisticsForPartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
