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

#include "updatemltransformresponse.h"
#include "updatemltransformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateMLTransformResponse
 * \brief The UpdateMLTransformResponse class provides an interace for Glue UpdateMLTransform responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateMLTransform
 */

/*!
 * Constructs a UpdateMLTransformResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMLTransformResponse::UpdateMLTransformResponse(
        const UpdateMLTransformRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateMLTransformResponsePrivate(this), parent)
{
    setRequest(new UpdateMLTransformRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMLTransformRequest * UpdateMLTransformResponse::request() const
{
    Q_D(const UpdateMLTransformResponse);
    return static_cast<const UpdateMLTransformRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateMLTransform \a response.
 */
void UpdateMLTransformResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMLTransformResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateMLTransformResponsePrivate
 * \brief The UpdateMLTransformResponsePrivate class provides private implementation for UpdateMLTransformResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateMLTransformResponsePrivate object with public implementation \a q.
 */
UpdateMLTransformResponsePrivate::UpdateMLTransformResponsePrivate(
    UpdateMLTransformResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateMLTransform response element from \a xml.
 */
void UpdateMLTransformResponsePrivate::parseUpdateMLTransformResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMLTransformResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
