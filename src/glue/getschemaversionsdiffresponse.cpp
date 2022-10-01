// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemaversionsdiffresponse.h"
#include "getschemaversionsdiffresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaVersionsDiffResponse
 * \brief The GetSchemaVersionsDiffResponse class provides an interace for Glue GetSchemaVersionsDiff responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSchemaVersionsDiff
 */

/*!
 * Constructs a GetSchemaVersionsDiffResponse object for \a reply to \a request, with parent \a parent.
 */
GetSchemaVersionsDiffResponse::GetSchemaVersionsDiffResponse(
        const GetSchemaVersionsDiffRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSchemaVersionsDiffResponsePrivate(this), parent)
{
    setRequest(new GetSchemaVersionsDiffRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSchemaVersionsDiffRequest * GetSchemaVersionsDiffResponse::request() const
{
    Q_D(const GetSchemaVersionsDiffResponse);
    return static_cast<const GetSchemaVersionsDiffRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetSchemaVersionsDiff \a response.
 */
void GetSchemaVersionsDiffResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSchemaVersionsDiffResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSchemaVersionsDiffResponsePrivate
 * \brief The GetSchemaVersionsDiffResponsePrivate class provides private implementation for GetSchemaVersionsDiffResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaVersionsDiffResponsePrivate object with public implementation \a q.
 */
GetSchemaVersionsDiffResponsePrivate::GetSchemaVersionsDiffResponsePrivate(
    GetSchemaVersionsDiffResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSchemaVersionsDiff response element from \a xml.
 */
void GetSchemaVersionsDiffResponsePrivate::parseGetSchemaVersionsDiffResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaVersionsDiffResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
