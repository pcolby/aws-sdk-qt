// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetyperesponse.h"
#include "deletetyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteTypeResponse
 * \brief The DeleteTypeResponse class provides an interace for AppSync DeleteType responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteType
 */

/*!
 * Constructs a DeleteTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTypeResponse::DeleteTypeResponse(
        const DeleteTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTypeRequest * DeleteTypeResponse::request() const
{
    Q_D(const DeleteTypeResponse);
    return static_cast<const DeleteTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteType \a response.
 */
void DeleteTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteTypeResponsePrivate
 * \brief The DeleteTypeResponsePrivate class provides private implementation for DeleteTypeResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteTypeResponsePrivate object with public implementation \a q.
 */
DeleteTypeResponsePrivate::DeleteTypeResponsePrivate(
    DeleteTypeResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteType response element from \a xml.
 */
void DeleteTypeResponsePrivate::parseDeleteTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
