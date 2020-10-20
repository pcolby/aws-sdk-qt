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

#include "createuserdefinedfunctionresponse.h"
#include "createuserdefinedfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateUserDefinedFunctionResponse
 * \brief The CreateUserDefinedFunctionResponse class provides an interace for Glue CreateUserDefinedFunction responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createUserDefinedFunction
 */

/*!
 * Constructs a CreateUserDefinedFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserDefinedFunctionResponse::CreateUserDefinedFunctionResponse(
        const CreateUserDefinedFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateUserDefinedFunctionResponsePrivate(this), parent)
{
    setRequest(new CreateUserDefinedFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserDefinedFunctionRequest * CreateUserDefinedFunctionResponse::request() const
{
    Q_D(const CreateUserDefinedFunctionResponse);
    return static_cast<const CreateUserDefinedFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateUserDefinedFunction \a response.
 */
void CreateUserDefinedFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserDefinedFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateUserDefinedFunctionResponsePrivate
 * \brief The CreateUserDefinedFunctionResponsePrivate class provides private implementation for CreateUserDefinedFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateUserDefinedFunctionResponsePrivate object with public implementation \a q.
 */
CreateUserDefinedFunctionResponsePrivate::CreateUserDefinedFunctionResponsePrivate(
    CreateUserDefinedFunctionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateUserDefinedFunction response element from \a xml.
 */
void CreateUserDefinedFunctionResponsePrivate::parseCreateUserDefinedFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserDefinedFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
