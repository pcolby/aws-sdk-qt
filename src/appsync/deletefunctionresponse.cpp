// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefunctionresponse.h"
#include "deletefunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteFunctionResponse
 * \brief The DeleteFunctionResponse class provides an interace for AppSync DeleteFunction responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteFunction
 */

/*!
 * Constructs a DeleteFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFunctionResponse::DeleteFunctionResponse(
        const DeleteFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteFunctionResponsePrivate(this), parent)
{
    setRequest(new DeleteFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFunctionRequest * DeleteFunctionResponse::request() const
{
    Q_D(const DeleteFunctionResponse);
    return static_cast<const DeleteFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteFunction \a response.
 */
void DeleteFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteFunctionResponsePrivate
 * \brief The DeleteFunctionResponsePrivate class provides private implementation for DeleteFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteFunctionResponsePrivate object with public implementation \a q.
 */
DeleteFunctionResponsePrivate::DeleteFunctionResponsePrivate(
    DeleteFunctionResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteFunction response element from \a xml.
 */
void DeleteFunctionResponsePrivate::parseDeleteFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
