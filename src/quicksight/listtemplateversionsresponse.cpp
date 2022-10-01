// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtemplateversionsresponse.h"
#include "listtemplateversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListTemplateVersionsResponse
 * \brief The ListTemplateVersionsResponse class provides an interace for QuickSight ListTemplateVersions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listTemplateVersions
 */

/*!
 * Constructs a ListTemplateVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTemplateVersionsResponse::ListTemplateVersionsResponse(
        const ListTemplateVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListTemplateVersionsResponsePrivate(this), parent)
{
    setRequest(new ListTemplateVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTemplateVersionsRequest * ListTemplateVersionsResponse::request() const
{
    Q_D(const ListTemplateVersionsResponse);
    return static_cast<const ListTemplateVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListTemplateVersions \a response.
 */
void ListTemplateVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTemplateVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListTemplateVersionsResponsePrivate
 * \brief The ListTemplateVersionsResponsePrivate class provides private implementation for ListTemplateVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListTemplateVersionsResponsePrivate object with public implementation \a q.
 */
ListTemplateVersionsResponsePrivate::ListTemplateVersionsResponsePrivate(
    ListTemplateVersionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListTemplateVersions response element from \a xml.
 */
void ListTemplateVersionsResponsePrivate::parseListTemplateVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTemplateVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
