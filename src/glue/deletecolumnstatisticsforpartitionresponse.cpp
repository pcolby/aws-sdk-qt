// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecolumnstatisticsforpartitionresponse.h"
#include "deletecolumnstatisticsforpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForPartitionResponse
 * \brief The DeleteColumnStatisticsForPartitionResponse class provides an interace for Glue DeleteColumnStatisticsForPartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteColumnStatisticsForPartition
 */

/*!
 * Constructs a DeleteColumnStatisticsForPartitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteColumnStatisticsForPartitionResponse::DeleteColumnStatisticsForPartitionResponse(
        const DeleteColumnStatisticsForPartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteColumnStatisticsForPartitionResponsePrivate(this), parent)
{
    setRequest(new DeleteColumnStatisticsForPartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteColumnStatisticsForPartitionRequest * DeleteColumnStatisticsForPartitionResponse::request() const
{
    Q_D(const DeleteColumnStatisticsForPartitionResponse);
    return static_cast<const DeleteColumnStatisticsForPartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteColumnStatisticsForPartition \a response.
 */
void DeleteColumnStatisticsForPartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteColumnStatisticsForPartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForPartitionResponsePrivate
 * \brief The DeleteColumnStatisticsForPartitionResponsePrivate class provides private implementation for DeleteColumnStatisticsForPartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteColumnStatisticsForPartitionResponsePrivate object with public implementation \a q.
 */
DeleteColumnStatisticsForPartitionResponsePrivate::DeleteColumnStatisticsForPartitionResponsePrivate(
    DeleteColumnStatisticsForPartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteColumnStatisticsForPartition response element from \a xml.
 */
void DeleteColumnStatisticsForPartitionResponsePrivate::parseDeleteColumnStatisticsForPartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteColumnStatisticsForPartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
