// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtemplateversionsresponse.h"
#include "listtemplateversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListTemplateVersionsResponse
 * \brief The ListTemplateVersionsResponse class provides an interace for Pinpoint ListTemplateVersions responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listTemplateVersions
 */

/*!
 * Constructs a ListTemplateVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTemplateVersionsResponse::ListTemplateVersionsResponse(
        const ListTemplateVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new ListTemplateVersionsResponsePrivate(this), parent)
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
 * Parses a successful Pinpoint ListTemplateVersions \a response.
 */
void ListTemplateVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTemplateVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::ListTemplateVersionsResponsePrivate
 * \brief The ListTemplateVersionsResponsePrivate class provides private implementation for ListTemplateVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListTemplateVersionsResponsePrivate object with public implementation \a q.
 */
ListTemplateVersionsResponsePrivate::ListTemplateVersionsResponsePrivate(
    ListTemplateVersionsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint ListTemplateVersions response element from \a xml.
 */
void ListTemplateVersionsResponsePrivate::parseListTemplateVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTemplateVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
