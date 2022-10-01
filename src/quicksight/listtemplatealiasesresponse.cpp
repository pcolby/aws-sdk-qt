// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtemplatealiasesresponse.h"
#include "listtemplatealiasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListTemplateAliasesResponse
 * \brief The ListTemplateAliasesResponse class provides an interace for QuickSight ListTemplateAliases responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listTemplateAliases
 */

/*!
 * Constructs a ListTemplateAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTemplateAliasesResponse::ListTemplateAliasesResponse(
        const ListTemplateAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListTemplateAliasesResponsePrivate(this), parent)
{
    setRequest(new ListTemplateAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTemplateAliasesRequest * ListTemplateAliasesResponse::request() const
{
    Q_D(const ListTemplateAliasesResponse);
    return static_cast<const ListTemplateAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListTemplateAliases \a response.
 */
void ListTemplateAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTemplateAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListTemplateAliasesResponsePrivate
 * \brief The ListTemplateAliasesResponsePrivate class provides private implementation for ListTemplateAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListTemplateAliasesResponsePrivate object with public implementation \a q.
 */
ListTemplateAliasesResponsePrivate::ListTemplateAliasesResponsePrivate(
    ListTemplateAliasesResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListTemplateAliases response element from \a xml.
 */
void ListTemplateAliasesResponsePrivate::parseListTemplateAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTemplateAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
