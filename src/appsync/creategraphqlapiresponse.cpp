/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
