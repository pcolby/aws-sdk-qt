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

#include "batchdeletetableversionresponse.h"
#include "batchdeletetableversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeleteTableVersionResponse
 * \brief The BatchDeleteTableVersionResponse class provides an interace for Glue BatchDeleteTableVersion responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchDeleteTableVersion
 */

/*!
 * Constructs a BatchDeleteTableVersionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteTableVersionResponse::BatchDeleteTableVersionResponse(
        const BatchDeleteTableVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchDeleteTableVersionResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteTableVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteTableVersionRequest * BatchDeleteTableVersionResponse::request() const
{
    Q_D(const BatchDeleteTableVersionResponse);
    return static_cast<const BatchDeleteTableVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchDeleteTableVersion \a response.
 */
void BatchDeleteTableVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchDeleteTableVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchDeleteTableVersionResponsePrivate
 * \brief The BatchDeleteTableVersionResponsePrivate class provides private implementation for BatchDeleteTableVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchDeleteTableVersionResponsePrivate object with public implementation \a q.
 */
BatchDeleteTableVersionResponsePrivate::BatchDeleteTableVersionResponsePrivate(
    BatchDeleteTableVersionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchDeleteTableVersion response element from \a xml.
 */
void BatchDeleteTableVersionResponsePrivate::parseBatchDeleteTableVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteTableVersionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
