// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettablesresponse.h"
#include "gettablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTablesResponse
 * \brief The GetTablesResponse class provides an interace for Glue GetTables responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTables
 */

/*!
 * Constructs a GetTablesResponse object for \a reply to \a request, with parent \a parent.
 */
GetTablesResponse::GetTablesResponse(
        const GetTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTablesResponsePrivate(this), parent)
{
    setRequest(new GetTablesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTablesRequest * GetTablesResponse::request() const
{
    Q_D(const GetTablesResponse);
    return static_cast<const GetTablesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetTables \a response.
 */
void GetTablesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTablesResponsePrivate
 * \brief The GetTablesResponsePrivate class provides private implementation for GetTablesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTablesResponsePrivate object with public implementation \a q.
 */
GetTablesResponsePrivate::GetTablesResponsePrivate(
    GetTablesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTables response element from \a xml.
 */
void GetTablesResponsePrivate::parseGetTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTablesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
