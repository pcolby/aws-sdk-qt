// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatasourceresponse.h"
#include "getdatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetDataSourceResponse
 * \brief The GetDataSourceResponse class provides an interace for AppSync GetDataSource responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getDataSource
 */

/*!
 * Constructs a GetDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataSourceResponse::GetDataSourceResponse(
        const GetDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetDataSourceResponsePrivate(this), parent)
{
    setRequest(new GetDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataSourceRequest * GetDataSourceResponse::request() const
{
    Q_D(const GetDataSourceResponse);
    return static_cast<const GetDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetDataSource \a response.
 */
void GetDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetDataSourceResponsePrivate
 * \brief The GetDataSourceResponsePrivate class provides private implementation for GetDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetDataSourceResponsePrivate object with public implementation \a q.
 */
GetDataSourceResponsePrivate::GetDataSourceResponsePrivate(
    GetDataSourceResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetDataSource response element from \a xml.
 */
void GetDataSourceResponsePrivate::parseGetDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
