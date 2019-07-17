/*
    Copyright 2013-2019 Paul Colby

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

#include "getclassifiersresponse.h"
#include "getclassifiersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetClassifiersResponse
 * \brief The GetClassifiersResponse class provides an interace for Glue GetClassifiers responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getClassifiers
 */

/*!
 * Constructs a GetClassifiersResponse object for \a reply to \a request, with parent \a parent.
 */
GetClassifiersResponse::GetClassifiersResponse(
        const GetClassifiersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetClassifiersResponsePrivate(this), parent)
{
    setRequest(new GetClassifiersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetClassifiersRequest * GetClassifiersResponse::request() const
{
    Q_D(const GetClassifiersResponse);
    return static_cast<const GetClassifiersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetClassifiers \a response.
 */
void GetClassifiersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetClassifiersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetClassifiersResponsePrivate
 * \brief The GetClassifiersResponsePrivate class provides private implementation for GetClassifiersResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetClassifiersResponsePrivate object with public implementation \a q.
 */
GetClassifiersResponsePrivate::GetClassifiersResponsePrivate(
    GetClassifiersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetClassifiers response element from \a xml.
 */
void GetClassifiersResponsePrivate::parseGetClassifiersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClassifiersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
