// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetblueprintsresponse.h"
#include "batchgetblueprintsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetBlueprintsResponse
 * \brief The BatchGetBlueprintsResponse class provides an interace for Glue BatchGetBlueprints responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchGetBlueprints
 */

/*!
 * Constructs a BatchGetBlueprintsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetBlueprintsResponse::BatchGetBlueprintsResponse(
        const BatchGetBlueprintsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetBlueprintsResponsePrivate(this), parent)
{
    setRequest(new BatchGetBlueprintsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetBlueprintsRequest * BatchGetBlueprintsResponse::request() const
{
    Q_D(const BatchGetBlueprintsResponse);
    return static_cast<const BatchGetBlueprintsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchGetBlueprints \a response.
 */
void BatchGetBlueprintsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetBlueprintsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchGetBlueprintsResponsePrivate
 * \brief The BatchGetBlueprintsResponsePrivate class provides private implementation for BatchGetBlueprintsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetBlueprintsResponsePrivate object with public implementation \a q.
 */
BatchGetBlueprintsResponsePrivate::BatchGetBlueprintsResponsePrivate(
    BatchGetBlueprintsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchGetBlueprints response element from \a xml.
 */
void BatchGetBlueprintsResponsePrivate::parseBatchGetBlueprintsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetBlueprintsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
