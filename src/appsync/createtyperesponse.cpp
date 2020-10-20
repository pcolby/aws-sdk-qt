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

#include "createtyperesponse.h"
#include "createtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateTypeResponse
 * \brief The CreateTypeResponse class provides an interace for AppSync CreateType responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createType
 */

/*!
 * Constructs a CreateTypeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTypeResponse::CreateTypeResponse(
        const CreateTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateTypeResponsePrivate(this), parent)
{
    setRequest(new CreateTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTypeRequest * CreateTypeResponse::request() const
{
    Q_D(const CreateTypeResponse);
    return static_cast<const CreateTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync CreateType \a response.
 */
void CreateTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::CreateTypeResponsePrivate
 * \brief The CreateTypeResponsePrivate class provides private implementation for CreateTypeResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateTypeResponsePrivate object with public implementation \a q.
 */
CreateTypeResponsePrivate::CreateTypeResponsePrivate(
    CreateTypeResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync CreateType response element from \a xml.
 */
void CreateTypeResponsePrivate::parseCreateTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
