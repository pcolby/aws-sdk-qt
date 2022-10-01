// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemaversionresponse.h"
#include "getschemaversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaVersionResponse
 * \brief The GetSchemaVersionResponse class provides an interace for Glue GetSchemaVersion responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSchemaVersion
 */

/*!
 * Constructs a GetSchemaVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSchemaVersionResponse::GetSchemaVersionResponse(
        const GetSchemaVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSchemaVersionResponsePrivate(this), parent)
{
    setRequest(new GetSchemaVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSchemaVersionRequest * GetSchemaVersionResponse::request() const
{
    Q_D(const GetSchemaVersionResponse);
    return static_cast<const GetSchemaVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetSchemaVersion \a response.
 */
void GetSchemaVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSchemaVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSchemaVersionResponsePrivate
 * \brief The GetSchemaVersionResponsePrivate class provides private implementation for GetSchemaVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaVersionResponsePrivate object with public implementation \a q.
 */
GetSchemaVersionResponsePrivate::GetSchemaVersionResponsePrivate(
    GetSchemaVersionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSchemaVersion response element from \a xml.
 */
void GetSchemaVersionResponsePrivate::parseGetSchemaVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
