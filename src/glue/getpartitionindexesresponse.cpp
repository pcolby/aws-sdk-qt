// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpartitionindexesresponse.h"
#include "getpartitionindexesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPartitionIndexesResponse
 * \brief The GetPartitionIndexesResponse class provides an interace for Glue GetPartitionIndexes responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getPartitionIndexes
 */

/*!
 * Constructs a GetPartitionIndexesResponse object for \a reply to \a request, with parent \a parent.
 */
GetPartitionIndexesResponse::GetPartitionIndexesResponse(
        const GetPartitionIndexesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetPartitionIndexesResponsePrivate(this), parent)
{
    setRequest(new GetPartitionIndexesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPartitionIndexesRequest * GetPartitionIndexesResponse::request() const
{
    Q_D(const GetPartitionIndexesResponse);
    return static_cast<const GetPartitionIndexesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetPartitionIndexes \a response.
 */
void GetPartitionIndexesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPartitionIndexesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetPartitionIndexesResponsePrivate
 * \brief The GetPartitionIndexesResponsePrivate class provides private implementation for GetPartitionIndexesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetPartitionIndexesResponsePrivate object with public implementation \a q.
 */
GetPartitionIndexesResponsePrivate::GetPartitionIndexesResponsePrivate(
    GetPartitionIndexesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetPartitionIndexes response element from \a xml.
 */
void GetPartitionIndexesResponsePrivate::parseGetPartitionIndexesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPartitionIndexesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
