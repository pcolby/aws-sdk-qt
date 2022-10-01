// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemacreationstatusresponse.h"
#include "getschemacreationstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetSchemaCreationStatusResponse
 * \brief The GetSchemaCreationStatusResponse class provides an interace for AppSync GetSchemaCreationStatus responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getSchemaCreationStatus
 */

/*!
 * Constructs a GetSchemaCreationStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetSchemaCreationStatusResponse::GetSchemaCreationStatusResponse(
        const GetSchemaCreationStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetSchemaCreationStatusResponsePrivate(this), parent)
{
    setRequest(new GetSchemaCreationStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSchemaCreationStatusRequest * GetSchemaCreationStatusResponse::request() const
{
    Q_D(const GetSchemaCreationStatusResponse);
    return static_cast<const GetSchemaCreationStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetSchemaCreationStatus \a response.
 */
void GetSchemaCreationStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSchemaCreationStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetSchemaCreationStatusResponsePrivate
 * \brief The GetSchemaCreationStatusResponsePrivate class provides private implementation for GetSchemaCreationStatusResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetSchemaCreationStatusResponsePrivate object with public implementation \a q.
 */
GetSchemaCreationStatusResponsePrivate::GetSchemaCreationStatusResponsePrivate(
    GetSchemaCreationStatusResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetSchemaCreationStatus response element from \a xml.
 */
void GetSchemaCreationStatusResponsePrivate::parseGetSchemaCreationStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaCreationStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
