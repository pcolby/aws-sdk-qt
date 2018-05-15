/*
    Copyright 2013-2018 Paul Colby

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
    /// @todo
}

} // namespace Glue
} // namespace QtAws
