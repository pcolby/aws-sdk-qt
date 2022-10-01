// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettyperesponse.h"
#include "gettyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetTypeResponse
 * \brief The GetTypeResponse class provides an interace for AppSync GetType responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getType
 */

/*!
 * Constructs a GetTypeResponse object for \a reply to \a request, with parent \a parent.
 */
GetTypeResponse::GetTypeResponse(
        const GetTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetTypeResponsePrivate(this), parent)
{
    setRequest(new GetTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTypeRequest * GetTypeResponse::request() const
{
    Q_D(const GetTypeResponse);
    return static_cast<const GetTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetType \a response.
 */
void GetTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetTypeResponsePrivate
 * \brief The GetTypeResponsePrivate class provides private implementation for GetTypeResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetTypeResponsePrivate object with public implementation \a q.
 */
GetTypeResponsePrivate::GetTypeResponsePrivate(
    GetTypeResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetType response element from \a xml.
 */
void GetTypeResponsePrivate::parseGetTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
