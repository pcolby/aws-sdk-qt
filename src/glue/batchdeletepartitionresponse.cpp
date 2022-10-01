// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletepartitionresponse.h"
#include "batchdeletepartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeletePartitionResponse
 * \brief The BatchDeletePartitionResponse class provides an interace for Glue BatchDeletePartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchDeletePartition
 */

/*!
 * Constructs a BatchDeletePartitionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeletePartitionResponse::BatchDeletePartitionResponse(
        const BatchDeletePartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchDeletePartitionResponsePrivate(this), parent)
{
    setRequest(new BatchDeletePartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeletePartitionRequest * BatchDeletePartitionResponse::request() const
{
    Q_D(const BatchDeletePartitionResponse);
    return static_cast<const BatchDeletePartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchDeletePartition \a response.
 */
void BatchDeletePartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeletePartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchDeletePartitionResponsePrivate
 * \brief The BatchDeletePartitionResponsePrivate class provides private implementation for BatchDeletePartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchDeletePartitionResponsePrivate object with public implementation \a q.
 */
BatchDeletePartitionResponsePrivate::BatchDeletePartitionResponsePrivate(
    BatchDeletePartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchDeletePartition response element from \a xml.
 */
void BatchDeletePartitionResponsePrivate::parseBatchDeletePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeletePartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
