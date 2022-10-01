// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresolverresponse.h"
#include "updateresolverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateResolverResponse
 * \brief The UpdateResolverResponse class provides an interace for AppSync UpdateResolver responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateResolver
 */

/*!
 * Constructs a UpdateResolverResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResolverResponse::UpdateResolverResponse(
        const UpdateResolverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateResolverResponsePrivate(this), parent)
{
    setRequest(new UpdateResolverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResolverRequest * UpdateResolverResponse::request() const
{
    Q_D(const UpdateResolverResponse);
    return static_cast<const UpdateResolverRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateResolver \a response.
 */
void UpdateResolverResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResolverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateResolverResponsePrivate
 * \brief The UpdateResolverResponsePrivate class provides private implementation for UpdateResolverResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateResolverResponsePrivate object with public implementation \a q.
 */
UpdateResolverResponsePrivate::UpdateResolverResponsePrivate(
    UpdateResolverResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateResolver response element from \a xml.
 */
void UpdateResolverResponsePrivate::parseUpdateResolverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResolverResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
