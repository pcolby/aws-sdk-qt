// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcolumnstatisticsfortableresponse.h"
#include "getcolumnstatisticsfortableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetColumnStatisticsForTableResponse
 * \brief The GetColumnStatisticsForTableResponse class provides an interace for Glue GetColumnStatisticsForTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getColumnStatisticsForTable
 */

/*!
 * Constructs a GetColumnStatisticsForTableResponse object for \a reply to \a request, with parent \a parent.
 */
GetColumnStatisticsForTableResponse::GetColumnStatisticsForTableResponse(
        const GetColumnStatisticsForTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetColumnStatisticsForTableResponsePrivate(this), parent)
{
    setRequest(new GetColumnStatisticsForTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetColumnStatisticsForTableRequest * GetColumnStatisticsForTableResponse::request() const
{
    Q_D(const GetColumnStatisticsForTableResponse);
    return static_cast<const GetColumnStatisticsForTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetColumnStatisticsForTable \a response.
 */
void GetColumnStatisticsForTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetColumnStatisticsForTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetColumnStatisticsForTableResponsePrivate
 * \brief The GetColumnStatisticsForTableResponsePrivate class provides private implementation for GetColumnStatisticsForTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetColumnStatisticsForTableResponsePrivate object with public implementation \a q.
 */
GetColumnStatisticsForTableResponsePrivate::GetColumnStatisticsForTableResponsePrivate(
    GetColumnStatisticsForTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetColumnStatisticsForTable response element from \a xml.
 */
void GetColumnStatisticsForTableResponsePrivate::parseGetColumnStatisticsForTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetColumnStatisticsForTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
