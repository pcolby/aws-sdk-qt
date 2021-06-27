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

#include "createmltransformresponse.h"
#include "createmltransformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateMLTransformResponse
 * \brief The CreateMLTransformResponse class provides an interace for Glue CreateMLTransform responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createMLTransform
 */

/*!
 * Constructs a CreateMLTransformResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMLTransformResponse::CreateMLTransformResponse(
        const CreateMLTransformRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateMLTransformResponsePrivate(this), parent)
{
    setRequest(new CreateMLTransformRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMLTransformRequest * CreateMLTransformResponse::request() const
{
    return static_cast<const CreateMLTransformRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue CreateMLTransform \a response.
 */
void CreateMLTransformResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMLTransformResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateMLTransformResponsePrivate
 * \brief The CreateMLTransformResponsePrivate class provides private implementation for CreateMLTransformResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateMLTransformResponsePrivate object with public implementation \a q.
 */
CreateMLTransformResponsePrivate::CreateMLTransformResponsePrivate(
    CreateMLTransformResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateMLTransform response element from \a xml.
 */
void CreateMLTransformResponsePrivate::parseCreateMLTransformResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMLTransformResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
