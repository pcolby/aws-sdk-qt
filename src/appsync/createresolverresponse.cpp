/*
    Copyright 2013-2018 Paul Colby

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

#include "createresolverresponse.h"
#include "createresolverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateResolverResponse
 * \brief The CreateResolverResponse class provides an interace for AppSync CreateResolver responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createResolver
 */

/*!
 * Constructs a CreateResolverResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResolverResponse::CreateResolverResponse(
        const CreateResolverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateResolverResponsePrivate(this), parent)
{
    setRequest(new CreateResolverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResolverRequest * CreateResolverResponse::request() const
{
    Q_D(const CreateResolverResponse);
    return static_cast<const CreateResolverRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync CreateResolver \a response.
 */
void CreateResolverResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResolverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::CreateResolverResponsePrivate
 * \brief The CreateResolverResponsePrivate class provides private implementation for CreateResolverResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateResolverResponsePrivate object with public implementation \a q.
 */
CreateResolverResponsePrivate::CreateResolverResponsePrivate(
    CreateResolverResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync CreateResolver response element from \a xml.
 */
void CreateResolverResponsePrivate::parseCreateResolverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResolverResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
