// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasourceresponse.h"
#include "updatedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateDataSourceResponse
 * \brief The UpdateDataSourceResponse class provides an interace for AppSync UpdateDataSource responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateDataSource
 */

/*!
 * Constructs a UpdateDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDataSourceResponse::UpdateDataSourceResponse(
        const UpdateDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateDataSourceResponsePrivate(this), parent)
{
    setRequest(new UpdateDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDataSourceRequest * UpdateDataSourceResponse::request() const
{
    Q_D(const UpdateDataSourceResponse);
    return static_cast<const UpdateDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateDataSource \a response.
 */
void UpdateDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateDataSourceResponsePrivate
 * \brief The UpdateDataSourceResponsePrivate class provides private implementation for UpdateDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateDataSourceResponsePrivate object with public implementation \a q.
 */
UpdateDataSourceResponsePrivate::UpdateDataSourceResponsePrivate(
    UpdateDataSourceResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateDataSource response element from \a xml.
 */
void UpdateDataSourceResponsePrivate::parseUpdateDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
