// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdataflowgraphresponse.h"
#include "getdataflowgraphresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDataflowGraphResponse
 * \brief The GetDataflowGraphResponse class provides an interace for Glue GetDataflowGraph responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDataflowGraph
 */

/*!
 * Constructs a GetDataflowGraphResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataflowGraphResponse::GetDataflowGraphResponse(
        const GetDataflowGraphRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDataflowGraphResponsePrivate(this), parent)
{
    setRequest(new GetDataflowGraphRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataflowGraphRequest * GetDataflowGraphResponse::request() const
{
    Q_D(const GetDataflowGraphResponse);
    return static_cast<const GetDataflowGraphRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetDataflowGraph \a response.
 */
void GetDataflowGraphResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataflowGraphResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetDataflowGraphResponsePrivate
 * \brief The GetDataflowGraphResponsePrivate class provides private implementation for GetDataflowGraphResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDataflowGraphResponsePrivate object with public implementation \a q.
 */
GetDataflowGraphResponsePrivate::GetDataflowGraphResponsePrivate(
    GetDataflowGraphResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetDataflowGraph response element from \a xml.
 */
void GetDataflowGraphResponsePrivate::parseGetDataflowGraphResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataflowGraphResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
