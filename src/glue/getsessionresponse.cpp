// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsessionresponse.h"
#include "getsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSessionResponse
 * \brief The GetSessionResponse class provides an interace for Glue GetSession responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSession
 */

/*!
 * Constructs a GetSessionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSessionResponse::GetSessionResponse(
        const GetSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSessionResponsePrivate(this), parent)
{
    setRequest(new GetSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSessionRequest * GetSessionResponse::request() const
{
    Q_D(const GetSessionResponse);
    return static_cast<const GetSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetSession \a response.
 */
void GetSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSessionResponsePrivate
 * \brief The GetSessionResponsePrivate class provides private implementation for GetSessionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSessionResponsePrivate object with public implementation \a q.
 */
GetSessionResponsePrivate::GetSessionResponsePrivate(
    GetSessionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSession response element from \a xml.
 */
void GetSessionResponsePrivate::parseGetSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
