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

#include "deleteuserdefinedfunctionresponse.h"
#include "deleteuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteUserDefinedFunctionResponse
 * \brief The DeleteUserDefinedFunctionResponse class provides an interace for Glue DeleteUserDefinedFunction responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteUserDefinedFunction
 */

/*!
 * Constructs a DeleteUserDefinedFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserDefinedFunctionResponse::DeleteUserDefinedFunctionResponse(
        const DeleteUserDefinedFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new DeleteUserDefinedFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserDefinedFunctionRequest * DeleteUserDefinedFunctionResponse::request() const
{
    Q_D(const DeleteUserDefinedFunctionResponse);
    return static_cast<const DeleteUserDefinedFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteUserDefinedFunction \a response.
 */
void DeleteUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserDefinedFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteUserDefinedFunctionResponsePrivate
 * \brief The DeleteUserDefinedFunctionResponsePrivate class provides private implementation for DeleteUserDefinedFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteUserDefinedFunctionResponsePrivate object with public implementation \a q.
 */
DeleteUserDefinedFunctionResponsePrivate::DeleteUserDefinedFunctionResponsePrivate(
    DeleteUserDefinedFunctionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteUserDefinedFunction response element from \a xml.
 */
void DeleteUserDefinedFunctionResponsePrivate::parseDeleteUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserDefinedFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
