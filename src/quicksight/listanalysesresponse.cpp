// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listanalysesresponse.h"
#include "listanalysesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListAnalysesResponse
 * \brief The ListAnalysesResponse class provides an interace for QuickSight ListAnalyses responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listAnalyses
 */

/*!
 * Constructs a ListAnalysesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAnalysesResponse::ListAnalysesResponse(
        const ListAnalysesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListAnalysesResponsePrivate(this), parent)
{
    setRequest(new ListAnalysesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAnalysesRequest * ListAnalysesResponse::request() const
{
    Q_D(const ListAnalysesResponse);
    return static_cast<const ListAnalysesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListAnalyses \a response.
 */
void ListAnalysesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAnalysesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListAnalysesResponsePrivate
 * \brief The ListAnalysesResponsePrivate class provides private implementation for ListAnalysesResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListAnalysesResponsePrivate object with public implementation \a q.
 */
ListAnalysesResponsePrivate::ListAnalysesResponsePrivate(
    ListAnalysesResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListAnalyses response element from \a xml.
 */
void ListAnalysesResponsePrivate::parseListAnalysesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAnalysesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
