// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasourceresponse.h"
#include "deletedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteDataSourceResponse
 * \brief The DeleteDataSourceResponse class provides an interace for AppSync DeleteDataSource responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteDataSource
 */

/*!
 * Constructs a DeleteDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataSourceResponse::DeleteDataSourceResponse(
        const DeleteDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteDataSourceResponsePrivate(this), parent)
{
    setRequest(new DeleteDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataSourceRequest * DeleteDataSourceResponse::request() const
{
    Q_D(const DeleteDataSourceResponse);
    return static_cast<const DeleteDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteDataSource \a response.
 */
void DeleteDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteDataSourceResponsePrivate
 * \brief The DeleteDataSourceResponsePrivate class provides private implementation for DeleteDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteDataSourceResponsePrivate object with public implementation \a q.
 */
DeleteDataSourceResponsePrivate::DeleteDataSourceResponsePrivate(
    DeleteDataSourceResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteDataSource response element from \a xml.
 */
void DeleteDataSourceResponsePrivate::parseDeleteDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
