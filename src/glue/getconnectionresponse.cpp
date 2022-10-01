// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectionresponse.h"
#include "getconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetConnectionResponse
 * \brief The GetConnectionResponse class provides an interace for Glue GetConnection responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getConnection
 */

/*!
 * Constructs a GetConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectionResponse::GetConnectionResponse(
        const GetConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetConnectionResponsePrivate(this), parent)
{
    setRequest(new GetConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectionRequest * GetConnectionResponse::request() const
{
    Q_D(const GetConnectionResponse);
    return static_cast<const GetConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetConnection \a response.
 */
void GetConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetConnectionResponsePrivate
 * \brief The GetConnectionResponsePrivate class provides private implementation for GetConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetConnectionResponsePrivate object with public implementation \a q.
 */
GetConnectionResponsePrivate::GetConnectionResponsePrivate(
    GetConnectionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetConnection response element from \a xml.
 */
void GetConnectionResponsePrivate::parseGetConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
