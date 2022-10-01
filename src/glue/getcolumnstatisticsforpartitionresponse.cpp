// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcolumnstatisticsforpartitionresponse.h"
#include "getcolumnstatisticsforpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetColumnStatisticsForPartitionResponse
 * \brief The GetColumnStatisticsForPartitionResponse class provides an interace for Glue GetColumnStatisticsForPartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getColumnStatisticsForPartition
 */

/*!
 * Constructs a GetColumnStatisticsForPartitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetColumnStatisticsForPartitionResponse::GetColumnStatisticsForPartitionResponse(
        const GetColumnStatisticsForPartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetColumnStatisticsForPartitionResponsePrivate(this), parent)
{
    setRequest(new GetColumnStatisticsForPartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetColumnStatisticsForPartitionRequest * GetColumnStatisticsForPartitionResponse::request() const
{
    Q_D(const GetColumnStatisticsForPartitionResponse);
    return static_cast<const GetColumnStatisticsForPartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetColumnStatisticsForPartition \a response.
 */
void GetColumnStatisticsForPartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetColumnStatisticsForPartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetColumnStatisticsForPartitionResponsePrivate
 * \brief The GetColumnStatisticsForPartitionResponsePrivate class provides private implementation for GetColumnStatisticsForPartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetColumnStatisticsForPartitionResponsePrivate object with public implementation \a q.
 */
GetColumnStatisticsForPartitionResponsePrivate::GetColumnStatisticsForPartitionResponsePrivate(
    GetColumnStatisticsForPartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetColumnStatisticsForPartition response element from \a xml.
 */
void GetColumnStatisticsForPartitionResponsePrivate::parseGetColumnStatisticsForPartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetColumnStatisticsForPartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
