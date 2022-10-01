// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserdefinedfunctionsresponse.h"
#include "getuserdefinedfunctionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionsResponse
 * \brief The GetUserDefinedFunctionsResponse class provides an interace for Glue GetUserDefinedFunctions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUserDefinedFunctions
 */

/*!
 * Constructs a GetUserDefinedFunctionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserDefinedFunctionsResponse::GetUserDefinedFunctionsResponse(
        const GetUserDefinedFunctionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetUserDefinedFunctionsResponsePrivate(this), parent)
{
    setRequest(new GetUserDefinedFunctionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserDefinedFunctionsRequest * GetUserDefinedFunctionsResponse::request() const
{
    Q_D(const GetUserDefinedFunctionsResponse);
    return static_cast<const GetUserDefinedFunctionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetUserDefinedFunctions \a response.
 */
void GetUserDefinedFunctionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserDefinedFunctionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionsResponsePrivate
 * \brief The GetUserDefinedFunctionsResponsePrivate class provides private implementation for GetUserDefinedFunctionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUserDefinedFunctionsResponsePrivate object with public implementation \a q.
 */
GetUserDefinedFunctionsResponsePrivate::GetUserDefinedFunctionsResponsePrivate(
    GetUserDefinedFunctionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetUserDefinedFunctions response element from \a xml.
 */
void GetUserDefinedFunctionsResponsePrivate::parseGetUserDefinedFunctionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserDefinedFunctionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
