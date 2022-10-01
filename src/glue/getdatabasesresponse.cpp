// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatabasesresponse.h"
#include "getdatabasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDatabasesResponse
 * \brief The GetDatabasesResponse class provides an interace for Glue GetDatabases responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDatabases
 */

/*!
 * Constructs a GetDatabasesResponse object for \a reply to \a request, with parent \a parent.
 */
GetDatabasesResponse::GetDatabasesResponse(
        const GetDatabasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDatabasesResponsePrivate(this), parent)
{
    setRequest(new GetDatabasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDatabasesRequest * GetDatabasesResponse::request() const
{
    Q_D(const GetDatabasesResponse);
    return static_cast<const GetDatabasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetDatabases \a response.
 */
void GetDatabasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDatabasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetDatabasesResponsePrivate
 * \brief The GetDatabasesResponsePrivate class provides private implementation for GetDatabasesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDatabasesResponsePrivate object with public implementation \a q.
 */
GetDatabasesResponsePrivate::GetDatabasesResponsePrivate(
    GetDatabasesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetDatabases response element from \a xml.
 */
void GetDatabasesResponsePrivate::parseGetDatabasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDatabasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
