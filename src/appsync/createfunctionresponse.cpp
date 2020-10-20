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
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
