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

#include "batchupdatetablerowsresponse.h"
#include "batchupdatetablerowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchUpdateTableRowsResponse
 * \brief The BatchUpdateTableRowsResponse class provides an interace for Honeycode BatchUpdateTableRows responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchUpdateTableRows
 */

/*!
 * Constructs a BatchUpdateTableRowsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchUpdateTableRowsResponse::BatchUpdateTableRowsResponse(
        const BatchUpdateTableRowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new BatchUpdateTableRowsResponsePrivate(this), parent)
{
    setRequest(new BatchUpdateTableRowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchUpdateTableRowsRequest * BatchUpdateTableRowsResponse::request() const
{
    Q_D(const BatchUpdateTableRowsResponse);
    return static_cast<const BatchUpdateTableRowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode BatchUpdateTableRows \a response.
 */
void BatchUpdateTableRowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchUpdateTableRowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::BatchUpdateTableRowsResponsePrivate
 * \brief The BatchUpdateTableRowsResponsePrivate class provides private implementation for BatchUpdateTableRowsResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchUpdateTableRowsResponsePrivate object with public implementation \a q.
 */
BatchUpdateTableRowsResponsePrivate::BatchUpdateTableRowsResponsePrivate(
    BatchUpdateTableRowsResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode BatchUpdateTableRows response element from \a xml.
 */
void BatchUpdateTableRowsResponsePrivate::parseBatchUpdateTableRowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchUpdateTableRowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
