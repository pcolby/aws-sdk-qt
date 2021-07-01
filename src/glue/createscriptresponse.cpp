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

#include "createscriptresponse.h"
#include "createscriptresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateScriptResponse
 * \brief The CreateScriptResponse class provides an interace for Glue CreateScript responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createScript
 */

/*!
 * Constructs a CreateScriptResponse object for \a reply to \a request, with parent \a parent.
 */
CreateScriptResponse::CreateScriptResponse(
        const CreateScriptRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateScriptResponsePrivate(this), parent)
{
    setRequest(new CreateScriptRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateScriptRequest * CreateScriptResponse::request() const
{
    Q_D(const CreateScriptResponse);
    return static_cast<const CreateScriptRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateScript \a response.
 */
void CreateScriptResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateScriptResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateScriptResponsePrivate
 * \brief The CreateScriptResponsePrivate class provides private implementation for CreateScriptResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateScriptResponsePrivate object with public implementation \a q.
 */
CreateScriptResponsePrivate::CreateScriptResponsePrivate(
    CreateScriptResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateScript response element from \a xml.
 */
void CreateScriptResponsePrivate::parseCreateScriptResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateScriptResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
