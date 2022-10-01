// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserdefinedfunctionresponse.h"
#include "getuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionResponse
 * \brief The GetUserDefinedFunctionResponse class provides an interace for Glue GetUserDefinedFunction responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUserDefinedFunction
 */

/*!
 * Constructs a GetUserDefinedFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserDefinedFunctionResponse::GetUserDefinedFunctionResponse(
        const GetUserDefinedFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new GetUserDefinedFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserDefinedFunctionRequest * GetUserDefinedFunctionResponse::request() const
{
    Q_D(const GetUserDefinedFunctionResponse);
    return static_cast<const GetUserDefinedFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetUserDefinedFunction \a response.
 */
void GetUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserDefinedFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionResponsePrivate
 * \brief The GetUserDefinedFunctionResponsePrivate class provides private implementation for GetUserDefinedFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUserDefinedFunctionResponsePrivate object with public implementation \a q.
 */
GetUserDefinedFunctionResponsePrivate::GetUserDefinedFunctionResponsePrivate(
    GetUserDefinedFunctionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetUserDefinedFunction response element from \a xml.
 */
void GetUserDefinedFunctionResponsePrivate::parseGetUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserDefinedFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
