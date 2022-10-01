// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcoveragestatisticsresponse.h"
#include "listcoveragestatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListCoverageStatisticsResponse
 * \brief The ListCoverageStatisticsResponse class provides an interace for Inspector2 ListCoverageStatistics responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listCoverageStatistics
 */

/*!
 * Constructs a ListCoverageStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCoverageStatisticsResponse::ListCoverageStatisticsResponse(
        const ListCoverageStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new ListCoverageStatisticsResponsePrivate(this), parent)
{
    setRequest(new ListCoverageStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCoverageStatisticsRequest * ListCoverageStatisticsResponse::request() const
{
    Q_D(const ListCoverageStatisticsResponse);
    return static_cast<const ListCoverageStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 ListCoverageStatistics \a response.
 */
void ListCoverageStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCoverageStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::ListCoverageStatisticsResponsePrivate
 * \brief The ListCoverageStatisticsResponsePrivate class provides private implementation for ListCoverageStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListCoverageStatisticsResponsePrivate object with public implementation \a q.
 */
ListCoverageStatisticsResponsePrivate::ListCoverageStatisticsResponsePrivate(
    ListCoverageStatisticsResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 ListCoverageStatistics response element from \a xml.
 */
void ListCoverageStatisticsResponsePrivate::parseListCoverageStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoverageStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
