// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategraphqlapiresponse.h"
#include "creategraphqlapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateGraphqlApiResponse
 * \brief The CreateGraphqlApiResponse class provides an interace for AppSync CreateGraphqlApi responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createGraphqlApi
 */

/*!
 * Constructs a CreateGraphqlApiResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGraphqlApiResponse::CreateGraphqlApiResponse(
        const CreateGraphqlApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateGraphqlApiResponsePrivate(this), parent)
{
    setRequest(new CreateGraphqlApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGraphqlApiRequest * CreateGraphqlApiResponse::request() const
{
    Q_D(const CreateGraphqlApiResponse);
    return static_cast<const CreateGraphqlApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync CreateGraphqlApi \a response.
 */
void CreateGraphqlApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGraphqlApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::CreateGraphqlApiResponsePrivate
 * \brief The CreateGraphqlApiResponsePrivate class provides private implementation for CreateGraphqlApiResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateGraphqlApiResponsePrivate object with public implementation \a q.
 */
CreateGraphqlApiResponsePrivate::CreateGraphqlApiResponsePrivate(
    CreateGraphqlApiResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync CreateGraphqlApi response element from \a xml.
 */
void CreateGraphqlApiResponsePrivate::parseCreateGraphqlApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGraphqlApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
