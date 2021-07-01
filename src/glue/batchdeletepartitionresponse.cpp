/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
