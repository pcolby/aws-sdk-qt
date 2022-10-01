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

#include "getmltransformsresponse.h"
#include "getmltransformsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTransformsResponse
 * \brief The GetMLTransformsResponse class provides an interace for Glue GetMLTransforms responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getMLTransforms
 */

/*!
 * Constructs a GetMLTransformsResponse object for \a reply to \a request, with parent \a parent.
 */
GetMLTransformsResponse::GetMLTransformsResponse(
        const GetMLTransformsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetMLTransformsResponsePrivate(this), parent)
{
    setRequest(new GetMLTransformsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMLTransformsRequest * GetMLTransformsResponse::request() const
{
    Q_D(const GetMLTransformsResponse);
    return static_cast<const GetMLTransformsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetMLTransforms \a response.
 */
void GetMLTransformsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMLTransformsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetMLTransformsResponsePrivate
 * \brief The GetMLTransformsResponsePrivate class provides private implementation for GetMLTransformsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTransformsResponsePrivate object with public implementation \a q.
 */
GetMLTransformsResponsePrivate::GetMLTransformsResponsePrivate(
    GetMLTransformsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetMLTransforms response element from \a xml.
 */
void GetMLTransformsResponsePrivate::parseGetMLTransformsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMLTransformsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
