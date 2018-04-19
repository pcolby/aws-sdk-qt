/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
    Q_D(BatchCreatePartitionResponse);
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
    /// @todo
}

} // namespace Glue
} // namespace QtAws
