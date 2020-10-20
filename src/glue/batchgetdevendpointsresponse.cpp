/*
    Copyright 2013-2020 Paul Colby

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

#include "batchgetdevendpointsresponse.h"
#include "batchgetdevendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetDevEndpointsResponse
 * \brief The BatchGetDevEndpointsResponse class provides an interace for Glue BatchGetDevEndpoints responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchGetDevEndpoints
 */

/*!
 * Constructs a BatchGetDevEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetDevEndpointsResponse::BatchGetDevEndpointsResponse(
        const BatchGetDevEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetDevEndpointsResponsePrivate(this), parent)
{
    setRequest(new BatchGetDevEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetDevEndpointsRequest * BatchGetDevEndpointsResponse::request() const
{
    Q_D(const BatchGetDevEndpointsResponse);
    return static_cast<const BatchGetDevEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchGetDevEndpoints \a response.
 */
void BatchGetDevEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetDevEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchGetDevEndpointsResponsePrivate
 * \brief The BatchGetDevEndpointsResponsePrivate class provides private implementation for BatchGetDevEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetDevEndpointsResponsePrivate object with public implementation \a q.
 */
BatchGetDevEndpointsResponsePrivate::BatchGetDevEndpointsResponsePrivate(
    BatchGetDevEndpointsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchGetDevEndpoints response element from \a xml.
 */
void BatchGetDevEndpointsResponsePrivate::parseBatchGetDevEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetDevEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
