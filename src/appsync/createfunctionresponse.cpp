// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfunctionresponse.h"
#include "createfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateFunctionResponse
 * \brief The CreateFunctionResponse class provides an interace for AppSync CreateFunction responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createFunction
 */

/*!
 * Constructs a CreateFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFunctionResponse::CreateFunctionResponse(
        const CreateFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateFunctionResponsePrivate(this), parent)
{
    setRequest(new CreateFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFunctionRequest * CreateFunctionResponse::request() const
{
    Q_D(const CreateFunctionResponse);
    return static_cast<const CreateFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync CreateFunction \a response.
 */
void CreateFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::CreateFunctionResponsePrivate
 * \brief The CreateFunctionResponsePrivate class provides private implementation for CreateFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateFunctionResponsePrivate object with public implementation \a q.
 */
CreateFunctionResponsePrivate::CreateFunctionResponsePrivate(
    CreateFunctionResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync CreateFunction response element from \a xml.
 */
void CreateFunctionResponsePrivate::parseCreateFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
