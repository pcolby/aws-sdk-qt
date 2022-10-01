// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchupdatepartitionresponse.h"
#include "batchupdatepartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchUpdatePartitionResponse
 * \brief The BatchUpdatePartitionResponse class provides an interace for Glue BatchUpdatePartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchUpdatePartition
 */

/*!
 * Constructs a BatchUpdatePartitionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchUpdatePartitionResponse::BatchUpdatePartitionResponse(
        const BatchUpdatePartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchUpdatePartitionResponsePrivate(this), parent)
{
    setRequest(new BatchUpdatePartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchUpdatePartitionRequest * BatchUpdatePartitionResponse::request() const
{
    Q_D(const BatchUpdatePartitionResponse);
    return static_cast<const BatchUpdatePartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchUpdatePartition \a response.
 */
void BatchUpdatePartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchUpdatePartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchUpdatePartitionResponsePrivate
 * \brief The BatchUpdatePartitionResponsePrivate class provides private implementation for BatchUpdatePartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchUpdatePartitionResponsePrivate object with public implementation \a q.
 */
BatchUpdatePartitionResponsePrivate::BatchUpdatePartitionResponsePrivate(
    BatchUpdatePartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchUpdatePartition response element from \a xml.
 */
void BatchUpdatePartitionResponsePrivate::parseBatchUpdatePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchUpdatePartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
