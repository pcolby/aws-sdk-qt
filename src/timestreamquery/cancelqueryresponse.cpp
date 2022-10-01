// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelqueryresponse.h"
#include "cancelqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::CancelQueryResponse
 * \brief The CancelQueryResponse class provides an interace for TimestreamQuery CancelQuery responses.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::cancelQuery
 */

/*!
 * Constructs a CancelQueryResponse object for \a reply to \a request, with parent \a parent.
 */
CancelQueryResponse::CancelQueryResponse(
        const CancelQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamQueryResponse(new CancelQueryResponsePrivate(this), parent)
{
    setRequest(new CancelQueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelQueryRequest * CancelQueryResponse::request() const
{
    Q_D(const CancelQueryResponse);
    return static_cast<const CancelQueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamQuery CancelQuery \a response.
 */
void CancelQueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamQuery::CancelQueryResponsePrivate
 * \brief The CancelQueryResponsePrivate class provides private implementation for CancelQueryResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a CancelQueryResponsePrivate object with public implementation \a q.
 */
CancelQueryResponsePrivate::CancelQueryResponsePrivate(
    CancelQueryResponse * const q) : TimestreamQueryResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamQuery CancelQuery response element from \a xml.
 */
void CancelQueryResponsePrivate::parseCancelQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelQueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamQuery
} // namespace QtAws
