// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectionsresponse.h"
#include "getconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetConnectionsResponse
 * \brief The GetConnectionsResponse class provides an interace for Glue GetConnections responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getConnections
 */

/*!
 * Constructs a GetConnectionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectionsResponse::GetConnectionsResponse(
        const GetConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetConnectionsResponsePrivate(this), parent)
{
    setRequest(new GetConnectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectionsRequest * GetConnectionsResponse::request() const
{
    Q_D(const GetConnectionsResponse);
    return static_cast<const GetConnectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetConnections \a response.
 */
void GetConnectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetConnectionsResponsePrivate
 * \brief The GetConnectionsResponsePrivate class provides private implementation for GetConnectionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetConnectionsResponsePrivate object with public implementation \a q.
 */
GetConnectionsResponsePrivate::GetConnectionsResponsePrivate(
    GetConnectionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetConnections response element from \a xml.
 */
void GetConnectionsResponsePrivate::parseGetConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
