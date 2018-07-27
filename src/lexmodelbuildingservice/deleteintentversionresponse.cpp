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

#include "deleteintentversionresponse.h"
#include "deleteintentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::DeleteIntentVersionResponse
 * \brief The DeleteIntentVersionResponse class provides an interace for LexModelBuildingService DeleteIntentVersion responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::deleteIntentVersion
 */

/*!
 * Constructs a DeleteIntentVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIntentVersionResponse::DeleteIntentVersionResponse(
        const DeleteIntentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteIntentVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteIntentVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIntentVersionRequest * DeleteIntentVersionResponse::request() const
{
    Q_D(const DeleteIntentVersionResponse);
    return static_cast<const DeleteIntentVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService DeleteIntentVersion \a response.
 */
void DeleteIntentVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIntentVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::DeleteIntentVersionResponsePrivate
 * \brief The DeleteIntentVersionResponsePrivate class provides private implementation for DeleteIntentVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a DeleteIntentVersionResponsePrivate object with public implementation \a q.
 */
DeleteIntentVersionResponsePrivate::DeleteIntentVersionResponsePrivate(
    DeleteIntentVersionResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService DeleteIntentVersion response element from \a xml.
 */
void DeleteIntentVersionResponsePrivate::parseDeleteIntentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntentVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
