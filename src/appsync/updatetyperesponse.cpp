// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetyperesponse.h"
#include "updatetyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateTypeResponse
 * \brief The UpdateTypeResponse class provides an interace for AppSync UpdateType responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateType
 */

/*!
 * Constructs a UpdateTypeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTypeResponse::UpdateTypeResponse(
        const UpdateTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateTypeResponsePrivate(this), parent)
{
    setRequest(new UpdateTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTypeRequest * UpdateTypeResponse::request() const
{
    Q_D(const UpdateTypeResponse);
    return static_cast<const UpdateTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateType \a response.
 */
void UpdateTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateTypeResponsePrivate
 * \brief The UpdateTypeResponsePrivate class provides private implementation for UpdateTypeResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateTypeResponsePrivate object with public implementation \a q.
 */
UpdateTypeResponsePrivate::UpdateTypeResponsePrivate(
    UpdateTypeResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateType response element from \a xml.
 */
void UpdateTypeResponsePrivate::parseUpdateTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
