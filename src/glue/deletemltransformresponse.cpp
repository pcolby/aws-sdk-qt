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

#include "deletemltransformresponse.h"
#include "deletemltransformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteMLTransformResponse
 * \brief The DeleteMLTransformResponse class provides an interace for Glue DeleteMLTransform responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteMLTransform
 */

/*!
 * Constructs a DeleteMLTransformResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMLTransformResponse::DeleteMLTransformResponse(
        const DeleteMLTransformRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteMLTransformResponsePrivate(this), parent)
{
    setRequest(new DeleteMLTransformRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMLTransformRequest * DeleteMLTransformResponse::request() const
{
    Q_D(const DeleteMLTransformResponse);
    return static_cast<const DeleteMLTransformRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteMLTransform \a response.
 */
void DeleteMLTransformResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMLTransformResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteMLTransformResponsePrivate
 * \brief The DeleteMLTransformResponsePrivate class provides private implementation for DeleteMLTransformResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteMLTransformResponsePrivate object with public implementation \a q.
 */
DeleteMLTransformResponsePrivate::DeleteMLTransformResponsePrivate(
    DeleteMLTransformResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteMLTransform response element from \a xml.
 */
void DeleteMLTransformResponsePrivate::parseDeleteMLTransformResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMLTransformResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
