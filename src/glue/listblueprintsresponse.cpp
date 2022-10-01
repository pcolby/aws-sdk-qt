// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listblueprintsresponse.h"
#include "listblueprintsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListBlueprintsResponse
 * \brief The ListBlueprintsResponse class provides an interace for Glue ListBlueprints responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listBlueprints
 */

/*!
 * Constructs a ListBlueprintsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBlueprintsResponse::ListBlueprintsResponse(
        const ListBlueprintsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListBlueprintsResponsePrivate(this), parent)
{
    setRequest(new ListBlueprintsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBlueprintsRequest * ListBlueprintsResponse::request() const
{
    Q_D(const ListBlueprintsResponse);
    return static_cast<const ListBlueprintsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListBlueprints \a response.
 */
void ListBlueprintsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBlueprintsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListBlueprintsResponsePrivate
 * \brief The ListBlueprintsResponsePrivate class provides private implementation for ListBlueprintsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListBlueprintsResponsePrivate object with public implementation \a q.
 */
ListBlueprintsResponsePrivate::ListBlueprintsResponsePrivate(
    ListBlueprintsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListBlueprints response element from \a xml.
 */
void ListBlueprintsResponsePrivate::parseListBlueprintsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBlueprintsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
