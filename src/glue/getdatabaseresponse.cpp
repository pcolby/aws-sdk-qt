// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatabaseresponse.h"
#include "getdatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDatabaseResponse
 * \brief The GetDatabaseResponse class provides an interace for Glue GetDatabase responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDatabase
 */

/*!
 * Constructs a GetDatabaseResponse object for \a reply to \a request, with parent \a parent.
 */
GetDatabaseResponse::GetDatabaseResponse(
        const GetDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDatabaseResponsePrivate(this), parent)
{
    setRequest(new GetDatabaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDatabaseRequest * GetDatabaseResponse::request() const
{
    Q_D(const GetDatabaseResponse);
    return static_cast<const GetDatabaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetDatabase \a response.
 */
void GetDatabaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetDatabaseResponsePrivate
 * \brief The GetDatabaseResponsePrivate class provides private implementation for GetDatabaseResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDatabaseResponsePrivate object with public implementation \a q.
 */
GetDatabaseResponsePrivate::GetDatabaseResponsePrivate(
    GetDatabaseResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetDatabase response element from \a xml.
 */
void GetDatabaseResponsePrivate::parseGetDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDatabaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
