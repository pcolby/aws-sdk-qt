// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetpartitionresponse.h"
#include "batchgetpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetPartitionResponse
 * \brief The BatchGetPartitionResponse class provides an interace for Glue BatchGetPartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchGetPartition
 */

/*!
 * Constructs a BatchGetPartitionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetPartitionResponse::BatchGetPartitionResponse(
        const BatchGetPartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetPartitionResponsePrivate(this), parent)
{
    setRequest(new BatchGetPartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetPartitionRequest * BatchGetPartitionResponse::request() const
{
    Q_D(const BatchGetPartitionResponse);
    return static_cast<const BatchGetPartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchGetPartition \a response.
 */
void BatchGetPartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetPartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchGetPartitionResponsePrivate
 * \brief The BatchGetPartitionResponsePrivate class provides private implementation for BatchGetPartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetPartitionResponsePrivate object with public implementation \a q.
 */
BatchGetPartitionResponsePrivate::BatchGetPartitionResponsePrivate(
    BatchGetPartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchGetPartition response element from \a xml.
 */
void BatchGetPartitionResponsePrivate::parseBatchGetPartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetPartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
