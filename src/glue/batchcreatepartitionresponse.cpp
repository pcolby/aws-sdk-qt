// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchcreatepartitionresponse.h"
#include "batchcreatepartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchCreatePartitionResponse
 * \brief The BatchCreatePartitionResponse class provides an interace for Glue BatchCreatePartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchCreatePartition
 */

/*!
 * Constructs a BatchCreatePartitionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchCreatePartitionResponse::BatchCreatePartitionResponse(
        const BatchCreatePartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchCreatePartitionResponsePrivate(this), parent)
{
    setRequest(new BatchCreatePartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchCreatePartitionRequest * BatchCreatePartitionResponse::request() const
{
    Q_D(const BatchCreatePartitionResponse);
    return static_cast<const BatchCreatePartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchCreatePartition \a response.
 */
void BatchCreatePartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchCreatePartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchCreatePartitionResponsePrivate
 * \brief The BatchCreatePartitionResponsePrivate class provides private implementation for BatchCreatePartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchCreatePartitionResponsePrivate object with public implementation \a q.
 */
BatchCreatePartitionResponsePrivate::BatchCreatePartitionResponsePrivate(
    BatchCreatePartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchCreatePartition response element from \a xml.
 */
void BatchCreatePartitionResponsePrivate::parseBatchCreatePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchCreatePartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
