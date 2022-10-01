// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemaresponse.h"
#include "getschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaResponse
 * \brief The GetSchemaResponse class provides an interace for Glue GetSchema responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSchema
 */

/*!
 * Constructs a GetSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
GetSchemaResponse::GetSchemaResponse(
        const GetSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSchemaResponsePrivate(this), parent)
{
    setRequest(new GetSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSchemaRequest * GetSchemaResponse::request() const
{
    Q_D(const GetSchemaResponse);
    return static_cast<const GetSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetSchema \a response.
 */
void GetSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSchemaResponsePrivate
 * \brief The GetSchemaResponsePrivate class provides private implementation for GetSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaResponsePrivate object with public implementation \a q.
 */
GetSchemaResponsePrivate::GetSchemaResponsePrivate(
    GetSchemaResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSchema response element from \a xml.
 */
void GetSchemaResponsePrivate::parseGetSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
