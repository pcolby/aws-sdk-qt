/*
    Copyright 2013-2019 Paul Colby

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

#include "batchdeletetableresponse.h"
#include "batchdeletetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeleteTableResponse
 * \brief The BatchDeleteTableResponse class provides an interace for Glue BatchDeleteTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchDeleteTable
 */

/*!
 * Constructs a BatchDeleteTableResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteTableResponse::BatchDeleteTableResponse(
        const BatchDeleteTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchDeleteTableResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteTableRequest * BatchDeleteTableResponse::request() const
{
    Q_D(const BatchDeleteTableResponse);
    return static_cast<const BatchDeleteTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchDeleteTable \a response.
 */
void BatchDeleteTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchDeleteTableResponsePrivate
 * \brief The BatchDeleteTableResponsePrivate class provides private implementation for BatchDeleteTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchDeleteTableResponsePrivate object with public implementation \a q.
 */
BatchDeleteTableResponsePrivate::BatchDeleteTableResponsePrivate(
    BatchDeleteTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchDeleteTable response element from \a xml.
 */
void BatchDeleteTableResponsePrivate::parseBatchDeleteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
