/*
    Copyright 2013-2021 Paul Colby

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

#include "getschemabydefinitionresponse.h"
#include "getschemabydefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaByDefinitionResponse
 * \brief The GetSchemaByDefinitionResponse class provides an interace for Glue GetSchemaByDefinition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getSchemaByDefinition
 */

/*!
 * Constructs a GetSchemaByDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSchemaByDefinitionResponse::GetSchemaByDefinitionResponse(
        const GetSchemaByDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSchemaByDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetSchemaByDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSchemaByDefinitionRequest * GetSchemaByDefinitionResponse::request() const
{
    return static_cast<const GetSchemaByDefinitionRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue GetSchemaByDefinition \a response.
 */
void GetSchemaByDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSchemaByDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSchemaByDefinitionResponsePrivate
 * \brief The GetSchemaByDefinitionResponsePrivate class provides private implementation for GetSchemaByDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaByDefinitionResponsePrivate object with public implementation \a q.
 */
GetSchemaByDefinitionResponsePrivate::GetSchemaByDefinitionResponsePrivate(
    GetSchemaByDefinitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSchemaByDefinition response element from \a xml.
 */
void GetSchemaByDefinitionResponsePrivate::parseGetSchemaByDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaByDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
