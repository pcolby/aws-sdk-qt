// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
