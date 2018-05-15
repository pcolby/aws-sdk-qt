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

#include "batchdeleteconnectionresponse.h"
#include "batchdeleteconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeleteConnectionResponse
 * \brief The BatchDeleteConnectionResponse class provides an interace for Glue BatchDeleteConnection responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchDeleteConnection
 */

/*!
 * Constructs a BatchDeleteConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteConnectionResponse::BatchDeleteConnectionResponse(
        const BatchDeleteConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchDeleteConnectionResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteConnectionRequest * BatchDeleteConnectionResponse::request() const
{
    Q_D(const BatchDeleteConnectionResponse);
    return static_cast<const BatchDeleteConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchDeleteConnection \a response.
 */
void BatchDeleteConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchDeleteConnectionResponsePrivate
 * \brief The BatchDeleteConnectionResponsePrivate class provides private implementation for BatchDeleteConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchDeleteConnectionResponsePrivate object with public implementation \a q.
 */
BatchDeleteConnectionResponsePrivate::BatchDeleteConnectionResponsePrivate(
    BatchDeleteConnectionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchDeleteConnection response element from \a xml.
 */
void BatchDeleteConnectionResponsePrivate::parseBatchDeleteConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteConnectionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
