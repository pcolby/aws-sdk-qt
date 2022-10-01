// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevendpointsresponse.h"
#include "listdevendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListDevEndpointsResponse
 * \brief The ListDevEndpointsResponse class provides an interace for Glue ListDevEndpoints responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listDevEndpoints
 */

/*!
 * Constructs a ListDevEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevEndpointsResponse::ListDevEndpointsResponse(
        const ListDevEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListDevEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListDevEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevEndpointsRequest * ListDevEndpointsResponse::request() const
{
    Q_D(const ListDevEndpointsResponse);
    return static_cast<const ListDevEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListDevEndpoints \a response.
 */
void ListDevEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListDevEndpointsResponsePrivate
 * \brief The ListDevEndpointsResponsePrivate class provides private implementation for ListDevEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListDevEndpointsResponsePrivate object with public implementation \a q.
 */
ListDevEndpointsResponsePrivate::ListDevEndpointsResponsePrivate(
    ListDevEndpointsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListDevEndpoints response element from \a xml.
 */
void ListDevEndpointsResponsePrivate::parseListDevEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
