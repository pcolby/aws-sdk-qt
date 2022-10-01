// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletetablerowsresponse.h"
#include "batchdeletetablerowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchDeleteTableRowsResponse
 * \brief The BatchDeleteTableRowsResponse class provides an interace for Honeycode BatchDeleteTableRows responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchDeleteTableRows
 */

/*!
 * Constructs a BatchDeleteTableRowsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteTableRowsResponse::BatchDeleteTableRowsResponse(
        const BatchDeleteTableRowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new BatchDeleteTableRowsResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteTableRowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteTableRowsRequest * BatchDeleteTableRowsResponse::request() const
{
    Q_D(const BatchDeleteTableRowsResponse);
    return static_cast<const BatchDeleteTableRowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode BatchDeleteTableRows \a response.
 */
void BatchDeleteTableRowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteTableRowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::BatchDeleteTableRowsResponsePrivate
 * \brief The BatchDeleteTableRowsResponsePrivate class provides private implementation for BatchDeleteTableRowsResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchDeleteTableRowsResponsePrivate object with public implementation \a q.
 */
BatchDeleteTableRowsResponsePrivate::BatchDeleteTableRowsResponsePrivate(
    BatchDeleteTableRowsResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode BatchDeleteTableRows response element from \a xml.
 */
void BatchDeleteTableRowsResponsePrivate::parseBatchDeleteTableRowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteTableRowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
