// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategraphqlapiresponse.h"
#include "updategraphqlapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateGraphqlApiResponse
 * \brief The UpdateGraphqlApiResponse class provides an interace for AppSync UpdateGraphqlApi responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateGraphqlApi
 */

/*!
 * Constructs a UpdateGraphqlApiResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGraphqlApiResponse::UpdateGraphqlApiResponse(
        const UpdateGraphqlApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateGraphqlApiResponsePrivate(this), parent)
{
    setRequest(new UpdateGraphqlApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGraphqlApiRequest * UpdateGraphqlApiResponse::request() const
{
    Q_D(const UpdateGraphqlApiResponse);
    return static_cast<const UpdateGraphqlApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateGraphqlApi \a response.
 */
void UpdateGraphqlApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGraphqlApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateGraphqlApiResponsePrivate
 * \brief The UpdateGraphqlApiResponsePrivate class provides private implementation for UpdateGraphqlApiResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateGraphqlApiResponsePrivate object with public implementation \a q.
 */
UpdateGraphqlApiResponsePrivate::UpdateGraphqlApiResponsePrivate(
    UpdateGraphqlApiResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateGraphqlApi response element from \a xml.
 */
void UpdateGraphqlApiResponsePrivate::parseUpdateGraphqlApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGraphqlApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
