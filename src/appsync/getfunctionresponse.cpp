// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfunctionresponse.h"
#include "getfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetFunctionResponse
 * \brief The GetFunctionResponse class provides an interace for AppSync GetFunction responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getFunction
 */

/*!
 * Constructs a GetFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
GetFunctionResponse::GetFunctionResponse(
        const GetFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetFunctionResponsePrivate(this), parent)
{
    setRequest(new GetFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFunctionRequest * GetFunctionResponse::request() const
{
    Q_D(const GetFunctionResponse);
    return static_cast<const GetFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetFunction \a response.
 */
void GetFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetFunctionResponsePrivate
 * \brief The GetFunctionResponsePrivate class provides private implementation for GetFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetFunctionResponsePrivate object with public implementation \a q.
 */
GetFunctionResponsePrivate::GetFunctionResponsePrivate(
    GetFunctionResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetFunction response element from \a xml.
 */
void GetFunctionResponsePrivate::parseGetFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
