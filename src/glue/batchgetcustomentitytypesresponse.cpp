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

#include "batchgetcustomentitytypesresponse.h"
#include "batchgetcustomentitytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetCustomEntityTypesResponse
 * \brief The BatchGetCustomEntityTypesResponse class provides an interace for Glue BatchGetCustomEntityTypes responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchGetCustomEntityTypes
 */

/*!
 * Constructs a BatchGetCustomEntityTypesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetCustomEntityTypesResponse::BatchGetCustomEntityTypesResponse(
        const BatchGetCustomEntityTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetCustomEntityTypesResponsePrivate(this), parent)
{
    setRequest(new BatchGetCustomEntityTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetCustomEntityTypesRequest * BatchGetCustomEntityTypesResponse::request() const
{
    Q_D(const BatchGetCustomEntityTypesResponse);
    return static_cast<const BatchGetCustomEntityTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchGetCustomEntityTypes \a response.
 */
void BatchGetCustomEntityTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetCustomEntityTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchGetCustomEntityTypesResponsePrivate
 * \brief The BatchGetCustomEntityTypesResponsePrivate class provides private implementation for BatchGetCustomEntityTypesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetCustomEntityTypesResponsePrivate object with public implementation \a q.
 */
BatchGetCustomEntityTypesResponsePrivate::BatchGetCustomEntityTypesResponsePrivate(
    BatchGetCustomEntityTypesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchGetCustomEntityTypes response element from \a xml.
 */
void BatchGetCustomEntityTypesResponsePrivate::parseBatchGetCustomEntityTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetCustomEntityTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
