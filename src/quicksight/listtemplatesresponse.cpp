// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtemplatesresponse.h"
#include "listtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListTemplatesResponse
 * \brief The ListTemplatesResponse class provides an interace for QuickSight ListTemplates responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listTemplates
 */

/*!
 * Constructs a ListTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTemplatesResponse::ListTemplatesResponse(
        const ListTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTemplatesRequest * ListTemplatesResponse::request() const
{
    Q_D(const ListTemplatesResponse);
    return static_cast<const ListTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListTemplates \a response.
 */
void ListTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListTemplatesResponsePrivate
 * \brief The ListTemplatesResponsePrivate class provides private implementation for ListTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListTemplatesResponsePrivate object with public implementation \a q.
 */
ListTemplatesResponsePrivate::ListTemplatesResponsePrivate(
    ListTemplatesResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListTemplates response element from \a xml.
 */
void ListTemplatesResponsePrivate::parseListTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
