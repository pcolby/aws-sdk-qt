// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecolumnstatisticsfortableresponse.h"
#include "deletecolumnstatisticsfortableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForTableResponse
 * \brief The DeleteColumnStatisticsForTableResponse class provides an interace for Glue DeleteColumnStatisticsForTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteColumnStatisticsForTable
 */

/*!
 * Constructs a DeleteColumnStatisticsForTableResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteColumnStatisticsForTableResponse::DeleteColumnStatisticsForTableResponse(
        const DeleteColumnStatisticsForTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteColumnStatisticsForTableResponsePrivate(this), parent)
{
    setRequest(new DeleteColumnStatisticsForTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteColumnStatisticsForTableRequest * DeleteColumnStatisticsForTableResponse::request() const
{
    Q_D(const DeleteColumnStatisticsForTableResponse);
    return static_cast<const DeleteColumnStatisticsForTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteColumnStatisticsForTable \a response.
 */
void DeleteColumnStatisticsForTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteColumnStatisticsForTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForTableResponsePrivate
 * \brief The DeleteColumnStatisticsForTableResponsePrivate class provides private implementation for DeleteColumnStatisticsForTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteColumnStatisticsForTableResponsePrivate object with public implementation \a q.
 */
DeleteColumnStatisticsForTableResponsePrivate::DeleteColumnStatisticsForTableResponsePrivate(
    DeleteColumnStatisticsForTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteColumnStatisticsForTable response element from \a xml.
 */
void DeleteColumnStatisticsForTableResponsePrivate::parseDeleteColumnStatisticsForTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteColumnStatisticsForTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
