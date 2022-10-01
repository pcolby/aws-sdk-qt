// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstatementresponse.h"
#include "getstatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetStatementResponse
 * \brief The GetStatementResponse class provides an interace for Glue GetStatement responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getStatement
 */

/*!
 * Constructs a GetStatementResponse object for \a reply to \a request, with parent \a parent.
 */
GetStatementResponse::GetStatementResponse(
        const GetStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetStatementResponsePrivate(this), parent)
{
    setRequest(new GetStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStatementRequest * GetStatementResponse::request() const
{
    Q_D(const GetStatementResponse);
    return static_cast<const GetStatementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetStatement \a response.
 */
void GetStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetStatementResponsePrivate
 * \brief The GetStatementResponsePrivate class provides private implementation for GetStatementResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetStatementResponsePrivate object with public implementation \a q.
 */
GetStatementResponsePrivate::GetStatementResponsePrivate(
    GetStatementResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetStatement response element from \a xml.
 */
void GetStatementResponsePrivate::parseGetStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
