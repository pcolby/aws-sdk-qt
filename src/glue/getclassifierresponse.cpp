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

#include "getclassifierresponse.h"
#include "getclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetClassifierResponse
 * \brief The GetClassifierResponse class provides an interace for Glue GetClassifier responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getClassifier
 */

/*!
 * Constructs a GetClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
GetClassifierResponse::GetClassifierResponse(
        const GetClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetClassifierResponsePrivate(this), parent)
{
    setRequest(new GetClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetClassifierRequest * GetClassifierResponse::request() const
{
    Q_D(const GetClassifierResponse);
    return static_cast<const GetClassifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetClassifier \a response.
 */
void GetClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetClassifierResponsePrivate
 * \brief The GetClassifierResponsePrivate class provides private implementation for GetClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetClassifierResponsePrivate object with public implementation \a q.
 */
GetClassifierResponsePrivate::GetClassifierResponsePrivate(
    GetClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetClassifier response element from \a xml.
 */
void GetClassifierResponsePrivate::parseGetClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClassifierResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
