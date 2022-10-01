// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelstatementresponse.h"
#include "cancelstatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CancelStatementResponse
 * \brief The CancelStatementResponse class provides an interace for Glue CancelStatement responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::cancelStatement
 */

/*!
 * Constructs a CancelStatementResponse object for \a reply to \a request, with parent \a parent.
 */
CancelStatementResponse::CancelStatementResponse(
        const CancelStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CancelStatementResponsePrivate(this), parent)
{
    setRequest(new CancelStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelStatementRequest * CancelStatementResponse::request() const
{
    Q_D(const CancelStatementResponse);
    return static_cast<const CancelStatementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CancelStatement \a response.
 */
void CancelStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CancelStatementResponsePrivate
 * \brief The CancelStatementResponsePrivate class provides private implementation for CancelStatementResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CancelStatementResponsePrivate object with public implementation \a q.
 */
CancelStatementResponsePrivate::CancelStatementResponsePrivate(
    CancelStatementResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CancelStatement response element from \a xml.
 */
void CancelStatementResponsePrivate::parseCancelStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
