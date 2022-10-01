// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "runstatementresponse.h"
#include "runstatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::RunStatementResponse
 * \brief The RunStatementResponse class provides an interace for Glue RunStatement responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::runStatement
 */

/*!
 * Constructs a RunStatementResponse object for \a reply to \a request, with parent \a parent.
 */
RunStatementResponse::RunStatementResponse(
        const RunStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new RunStatementResponsePrivate(this), parent)
{
    setRequest(new RunStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RunStatementRequest * RunStatementResponse::request() const
{
    Q_D(const RunStatementResponse);
    return static_cast<const RunStatementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue RunStatement \a response.
 */
void RunStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RunStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::RunStatementResponsePrivate
 * \brief The RunStatementResponsePrivate class provides private implementation for RunStatementResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a RunStatementResponsePrivate object with public implementation \a q.
 */
RunStatementResponsePrivate::RunStatementResponsePrivate(
    RunStatementResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue RunStatement response element from \a xml.
 */
void RunStatementResponsePrivate::parseRunStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RunStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
